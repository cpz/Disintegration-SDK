#pragma once

// Name: Robogore, Version: 1.1.176

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class V1OnlineRuntime.MatchmakingPlaylistMapData
// 0x0028 (0x0058 - 0x0030)
class UMatchmakingPlaylistMapData : public UDataAsset
{
public:
	struct FMatchmakingPlaylistMap                     playlistMap;                                              // 0x0030(0x0028) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1OnlineRuntime.MatchmakingPlaylistMapData");
		return ptr;
	}

};


// Class V1OnlineRuntime.MatchmakingPlaylistData
// 0x0050 (0x0080 - 0x0030)
class UMatchmakingPlaylistData : public UDataAsset
{
public:
	struct FMatchmakingPlaylist                        playlistConfig;                                           // 0x0030(0x0050) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1OnlineRuntime.MatchmakingPlaylistData");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
