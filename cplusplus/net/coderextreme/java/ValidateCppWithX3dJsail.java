/**
 * Copyright (c) 2025. John Carlson
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of content nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE

*/
import org.w3c.dom.Document;
import org.web3d.x3d.jsail.X3DLoaderDOM;
import org.web3d.x3d.jsail.Core.X3D;
import org.web3d.x3d.jsail.ConfigurationProperties;

public class ValidateCppWithX3dJsail {
	public static void main(String [] args) throws Exception {
		System.setProperty("javax.xml.accessExternalDTD", "file");
		System.setProperty("javax.xml.accessExternalSchema", "file");
		ConfigurationProperties.setIndentCharacter(' ');
		ConfigurationProperties.setIndentIncrement(2);

		for (int i = 0; i < args.length; i++) {
			try {
				X3DLoaderDOM xmlLoader = new X3DLoaderDOM();
            			CPPONGrammarDOMVisitor root = new CPPONGrammarDOMVisitor(args[i]);
				Document document = root.getDocument();
				X3D X3D0 = (X3D)xmlLoader.toX3dModelInstance(document);
				int ls = args[i].lastIndexOf("/");
				int ld = args[i].lastIndexOf(".");
				if (ls < 0) {
					ls = args[i].lastIndexOf("\\");
				} 
				X3D0.toFileJSON("../../../../output/"+args[i].substring(ls+1, ld)+".x3dj");
				String validationResults = X3D0.validationReport();
				if (!validationResults.isEmpty()) {
					System.out.println("Validation report for "+args[i]);
					System.err.println(validationResults.trim());
				} else {
					System.out.println("Valid "+args[i]);
				}
			} catch (Exception e) {
				System.out.println("Invalid "+args[i]);
				e.printStackTrace();
			}
		}
	}
}
