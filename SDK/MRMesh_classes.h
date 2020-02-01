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

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0028 - 0x0028)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh(class UMRMeshComponent** mesh);
};


// Class MRMesh.MockDataMeshTrackerComponent
// 0x0070 (0x0300 - 0x0290)
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	bool                                               ScanWorld;                                                // 0x0298(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestNormals;                                           // 0x0299(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RequestVertexConfidence;                                  // 0x029A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshTrackerVertexColorMode                        VertexColorMode;                                          // 0x029B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x029C(0x0004) MISSED OFFSET
	TArray<struct FColor>                              BlockVertexColors;                                        // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FLinearColor                                VertexColorFromConfidenceZero;                            // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                VertexColorFromConfidenceOne;                             // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UpdateInterval;                                           // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	class UMRMeshComponent*                            MRMesh;                                                   // 0x02D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x20];                                      // 0x02E0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		return ptr;
	}


	void OnMockDataMeshTrackerUpdated__DelegateSignature(int* Index, TArray<struct FVector>* Vertices, TArray<int>* Triangles, TArray<struct FVector>* Normals, TArray<float>* Confidence);
	void DisconnectMRMesh(class UMRMeshComponent** InMRMeshPtr);
	void ConnectMRMesh(class UMRMeshComponent** InMRMeshPtr);
};


// Class MRMesh.MRMeshComponent
// 0x0050 (0x0600 - 0x05B0)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	class UMaterialInterface*                          Material;                                                 // 0x05B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateMeshProxySections;                                 // 0x05B8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUpdateNavMeshOnMeshUpdate;                               // 0x05B9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bNeverCreateCollisionMesh;                                // 0x05BA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x05BB(0x0005) MISSED OFFSET
	class UBodySetup*                                  CachedBodySetup;                                          // 0x05C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x05C8(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x28];                                      // 0x05D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}


	bool IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
