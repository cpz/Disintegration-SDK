#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum V1OnlineRuntime.eMatchmakingFailureReason
enum class EeMatchmakingFailureReason : uint8_t
{
	eMatchmakingFailureReason__FailedToStart = 0,
	eMatchmakingFailureReason__TimedOut = 1,
	eMatchmakingFailureReason__InvalidQueue = 2,
	eMatchmakingFailureReason__FailedToGetServerInfo = 3,
	eMatchmakingFailureReason__FailedToValidateServer = 4,
	eMatchmakingFailureReason__FailedToJoinTicket = 5,
	eMatchmakingFailureReason__FailedToReflectTicketToParty = 6,
	eMatchmakingFailureReason__Unknown = 7,
	eMatchmakingFailureReason__eMatchmakingFailureReason_MAX = 8
};


// Enum V1OnlineRuntime.eMatchmakingRegion
enum class EeMatchmakingRegion : uint8_t
{
	eMatchmakingRegion__AustraliaEast = 0,
	eMatchmakingRegion__AustraliaSoutheast = 1,
	eMatchmakingRegion__BrazilSouth = 2,
	eMatchmakingRegion__CentralUs  = 3,
	eMatchmakingRegion__EastAsia   = 4,
	eMatchmakingRegion__EastUs     = 5,
	eMatchmakingRegion__EastUs2    = 6,
	eMatchmakingRegion__JapanEast  = 7,
	eMatchmakingRegion__JapanWest  = 8,
	eMatchmakingRegion__NorthCentralUs = 9,
	eMatchmakingRegion__NorthEurope = 10,
	eMatchmakingRegion__SouthCentralUs = 11,
	eMatchmakingRegion__SoutheastAsia = 12,
	eMatchmakingRegion__WestEurope = 13,
	eMatchmakingRegion__WestUs     = 14,
	eMatchmakingRegion__ChinaEast2 = 15,
	eMatchmakingRegion__ChinaNorth2 = 16,
	eMatchmakingRegion__SouthAfricaNorth = 17,
	eMatchmakingRegion__eMatchmakingRegion_MAX = 18
};


// Enum V1OnlineRuntime.eMatchmakingStatus
enum class EeMatchmakingStatus : uint8_t
{
	eMatchmakingStatus__None       = 0,
	eMatchmakingStatus__WaitingToStart = 1,
	eMatchmakingStatus__DelayStart = 2,
	eMatchmakingStatus__CreatingTicket = 3,
	eMatchmakingStatus__WaitingForParty = 4,
	eMatchmakingStatus__JoiningTicket = 5,
	eMatchmakingStatus__LookingForMatch = 6,
	eMatchmakingStatus__ValidatingGameServer = 7,
	eMatchmakingStatus__ConnectingToGameServer = 8,
	eMatchmakingStatus__Failed     = 9,
	eMatchmakingStatus__TimedOut   = 10,
	eMatchmakingStatus__Canceled   = 11,
	eMatchmakingStatus__eMatchmakingStatus_MAX = 12
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct V1OnlineRuntime.MatchmakingPlaylistMap
// 0x0028
struct FMatchmakingPlaylistMap
{
	struct FString                                     mapAttribute;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     mapAsset;                                                 // 0x0010(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      gameModeOverride;                                         // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct V1OnlineRuntime.MatchmakingPlaylist
// 0x0050
struct FMatchmakingPlaylist
{
	struct FString                                     playlistIdentifier;                                       // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FText                                       playlistName;                                             // 0x0010(0x0018) (Edit)
	struct FText                                       playlistDesc;                                             // 0x0028(0x0018) (Edit)
	TArray<class UMatchmakingPlaylistMapData*>         mapsInPlaylist;                                           // 0x0040(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct V1OnlineRuntime.GSDKSessionDataMasterAccountToTeamMapping
// 0x0020
struct FGSDKSessionDataMasterAccountToTeamMapping
{
	struct FString                                     masterAccountID;                                          // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     teamID;                                                   // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct V1OnlineRuntime.GSDKSessionDataTitleToMasterAccountIDMapping
// 0x0020
struct FGSDKSessionDataTitleToMasterAccountIDMapping
{
	struct FString                                     titleAccountID;                                           // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     masterAccountID;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct V1OnlineRuntime.GSDKSessionDataTargetMap
// 0x0020
struct FGSDKSessionDataTargetMap
{
	struct FString                                     AttributeName;                                            // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     mapAssetName;                                             // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct V1OnlineRuntime.GSDKSessionData
// 0x0080
struct FGSDKSessionData
{
	struct FString                                     SessionId;                                                // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     MatchID;                                                  // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     queueName;                                                // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FString>                             masterAccountIDs;                                         // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FGSDKSessionDataMasterAccountToTeamMapping> masterAccountToTeamMapping;                               // 0x0040(0x0010) (ZeroConstructor)
	TArray<struct FGSDKSessionDataTitleToMasterAccountIDMapping> titleToMasterAccountIDs;                                  // 0x0050(0x0010) (ZeroConstructor)
	struct FGSDKSessionDataTargetMap                   targetMap;                                                // 0x0060(0x0020)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
