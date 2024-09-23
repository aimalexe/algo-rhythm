# This script prints the 10th line of the file.
# Usage: .\solution_2.ps1 -FilePath <file.txt>

param (
    [string]$FilePath
)

# Read the file content
$lines = Get-Content -Path $FilePath

if ($lines.Count -lt 10) {
    Write-Output "The file contains less than 10 lines."
} else {
    Write-Output $lines[9]  # PowerShell arrays are zero-indexed
}
