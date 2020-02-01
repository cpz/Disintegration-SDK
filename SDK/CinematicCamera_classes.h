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

// Class CinematicCamera.CineCameraComponent
// 0x00E0 (0x0910 - 0x0830)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0830(0x000C) (Edit, BlueprintVisible)
	struct FCameraLensSettings                         LensSettings;                                             // 0x083C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0854(0x0004) MISSED OFFSET
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x0858(0x0058) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x08B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x08B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x08BC(0x000C) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x08C8(0x0010) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x08D8(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x08E8(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x08F8(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x0908(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x090C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}


	void SetLensPresetByName(struct FString* InPresetName);
	void SetFilmbackPresetByName(struct FString* InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};


// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x03C0 - 0x0390)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CranePitch;                                               // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneYaw;                                                 // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x03A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x03B0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x03B8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0060 (0x0950 - 0x08F0)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x08F0(0x0050) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0940(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x03B0 - 0x0390)
class ACameraRig_Rail : public AActor
{
public:
	float                                              CurrentPositionOnRail;                                    // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOrientationToRail;                                   // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0398(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x03A0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x03A8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
