#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RuntimeFilesDownloader

#include "Basic.hpp"


namespace SDK
{

// Enum RuntimeFilesDownloader.EDownloadToMemoryResult
// NumValues: 0x0004
enum class EDownloadToMemoryResult : uint8
{
	SuccessDownloading                       = 0,
	DownloadFailed                           = 1,
	InvalidURL                               = 2,
	EDownloadToMemoryResult_MAX              = 3,
};

// Enum RuntimeFilesDownloader.EDownloadToStorageResult
// NumValues: 0x0007
enum class EDownloadToStorageResult : uint8
{
	SuccessDownloading                       = 0,
	DownloadFailed                           = 1,
	SaveFailed                               = 2,
	DirectoryCreationFailed                  = 3,
	InvalidURL                               = 4,
	InvalidSavePath                          = 5,
	EDownloadToStorageResult_MAX             = 6,
};

}

