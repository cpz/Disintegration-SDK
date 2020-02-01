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

// Class V1SaveGameRuntime.SaveGameInterface
// 0x0000 (0x0028 - 0x0028)
class USaveGameInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1SaveGameRuntime.SaveGameInterface");
		return ptr;
	}

};


// Class V1SaveGameRuntime.V1SaveGame
// 0x0000 (0x0028 - 0x0028)
class UV1SaveGame : public USaveGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1SaveGameRuntime.V1SaveGame");
		return ptr;
	}

};


// Class V1SaveGameRuntime.V1SaveGameBookkeeping
// 0x0010 (0x0038 - 0x0028)
class UV1SaveGameBookkeeping : public UV1SaveGame
{
public:
	TArray<struct FString>                             saveGameSlotNames;                                        // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1SaveGameRuntime.V1SaveGameBookkeeping");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
