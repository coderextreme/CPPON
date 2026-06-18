$cppFiles = Get-ChildItem -Filter "*.cpp"

foreach ($file in $cppFiles) {
    # Write-Host "Processing file: $($file.Name)"
    # Write-Host "Full path: $($file.FullName)"
    cl.exe /c $file.Name /I . /I ../../../../CPPON /EHsc
}
