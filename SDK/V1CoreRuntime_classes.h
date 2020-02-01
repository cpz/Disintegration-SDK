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

// Class V1CoreRuntime.V1ActionBase
// 0x0008 (0x0030 - 0x0028)
class UV1ActionBase : public UObject
{
public:
	bool                                               m_started;                                                // 0x0028(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_finished;                                               // 0x0029(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_blocking;                                               // 0x002A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_paused;                                                 // 0x002B(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionBase");
		return ptr;
	}


	class UV1ActionBase* Unpause();
	class UV1ActionBase* Unblock();
	void Tick(float* dt);
	void Start();
	void SetStarted(bool* Started);
	void SetPaused(bool* paused);
	void SetFinished(bool* finished);
	void SetBlocking(bool* blocking);
	void Reset();
	class UV1ActionBase* Pause();
	bool IsStarted();
	bool IsPaused();
	bool IsFinished();
	bool IsBlocking();
	void Complete();
	class UV1ActionBase* Block();
};


// Class V1CoreRuntime.V1IntervalAction
// 0x0008 (0x0038 - 0x0030)
class UV1IntervalAction : public UV1ActionBase
{
public:
	float                                              m_actionLength;                                           // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_executionTime;                                          // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1IntervalAction");
		return ptr;
	}


	void Update(float* dt);
	void SetActionLength(float* newLength);
	void PreBegin();
	float GetInterval();
	float GetExecutionTime();
	float GetActionLength();
	void End();
	void Begin();
};


// Class V1CoreRuntime.IntervalActorAction
// 0x0010 (0x0048 - 0x0038)
class UIntervalActorAction : public UV1IntervalAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class AActor*                                      m_actor;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.IntervalActorAction");
		return ptr;
	}


	void SetActor(class AActor** Actor);
	class AActor* GetActor();
};


// Class V1CoreRuntime.ActionActorTransformBase
// 0x0038 (0x0080 - 0x0048)
class UActionActorTransformBase : public UIntervalActorAction
{
public:
	bool                                               m_localSpace;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EeActionTransformComponent                         m_transformComponent;                                     // 0x0049(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
	struct FTransform                                  m_transform;                                              // 0x0050(0x0030) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorTransformBase");
		return ptr;
	}


	void SetLocalSpace(bool* localSpace);
	bool IsLocalSpace();
};


// Class V1CoreRuntime.ActionActorTransformBy
// 0x0040 (0x00C0 - 0x0080)
class UActionActorTransformBy : public UActionActorTransformBase
{
public:
	struct FTransform                                  m_lastTransform;                                          // 0x0080(0x0030) (Transient, IsPlainOldData)
	struct FVector                                     m_expectedScaleChange;                                    // 0x00B0(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorTransformBy");
		return ptr;
	}

};


// Class V1CoreRuntime.ActionActorRotateBy
// 0x0010 (0x00D0 - 0x00C0)
class UActionActorRotateBy : public UActionActorTransformBy
{
public:
	struct FRotator                                    m_rotationDelta;                                          // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorRotateBy");
		return ptr;
	}


	void SetRotationDelta(struct FRotator* rotationDelta);
	struct FRotator GetRotationDelta();
	class UActionActorRotateBy* STATIC_CreateAction_ActorRotateBy(class UObject** Outer, class AActor** Actor, bool* Local, struct FRotator* rotationDelta, float* Length);
};


// Class V1CoreRuntime.ActionActorTransformTo
// 0x0030 (0x00B0 - 0x0080)
class UActionActorTransformTo : public UActionActorTransformBase
{
public:
	struct FTransform                                  m_startTransform;                                         // 0x0080(0x0030) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorTransformTo");
		return ptr;
	}

};


// Class V1CoreRuntime.ActionActorRotateTo
// 0x0010 (0x00C0 - 0x00B0)
class UActionActorRotateTo : public UActionActorTransformTo
{
public:
	struct FRotator                                    m_rotation;                                               // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorRotateTo");
		return ptr;
	}


	void SetRotation(struct FRotator* Rotation);
	struct FRotator GetRotationDelta();
	class UActionActorRotateTo* STATIC_CreateAction_ActorRotateTo(class UObject** Outer, class AActor** Actor, bool* Local, struct FRotator* Rotation, float* Length);
};


// Class V1CoreRuntime.ActionActorScaleBy
// 0x0010 (0x00D0 - 0x00C0)
class UActionActorScaleBy : public UActionActorTransformBy
{
public:
	struct FVector                                     m_scaleDelta;                                             // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorScaleBy");
		return ptr;
	}


	void SetScaleDelta(struct FVector* scaleDelta);
	struct FVector GetScaleDelta();
	class UActionActorScaleBy* STATIC_CreateAction_ActorScaleBy(class UObject** Outer, class AActor** Actor, bool* Local, struct FVector* scaleDelta, float* Length);
};


// Class V1CoreRuntime.ActionActorScaleTo
// 0x0010 (0x00C0 - 0x00B0)
class UActionActorScaleTo : public UActionActorTransformTo
{
public:
	struct FVector                                     m_scale;                                                  // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorScaleTo");
		return ptr;
	}


	void SetScale(struct FVector* Scale);
	struct FVector GetScale();
	class UActionActorScaleTo* STATIC_CreateAction_ActorScaleTo(class UObject** Outer, class AActor** Actor, bool* Local, struct FVector* Scale, float* Length);
};


// Class V1CoreRuntime.ActionActorTranslateBy
// 0x0010 (0x00D0 - 0x00C0)
class UActionActorTranslateBy : public UActionActorTransformBy
{
public:
	struct FVector                                     m_translationDelta;                                       // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorTranslateBy");
		return ptr;
	}


	void SetPositionDelta(struct FVector* positionDelta);
	struct FVector GetPositionDelta();
	class UActionActorTranslateBy* STATIC_CreateAction_ActorTranslateBy(class UObject** Outer, class AActor** Actor, bool* Local, struct FVector* translationDelta, float* Length);
};


// Class V1CoreRuntime.ActionActorTranslateTo
// 0x0010 (0x00C0 - 0x00B0)
class UActionActorTranslateTo : public UActionActorTransformTo
{
public:
	struct FVector                                     m_translation;                                            // 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionActorTranslateTo");
		return ptr;
	}


	void SetPosition(struct FVector* Position);
	struct FVector GetPosition();
	class UActionActorTranslateTo* STATIC_CreateAction_ActorTranslateTo(class UObject** Outer, class AActor** Actor, bool* Local, struct FVector* Translation, float* Length);
};


// Class V1CoreRuntime.V1InstantAction
// 0x0000 (0x0030 - 0x0030)
class UV1InstantAction : public UV1ActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1InstantAction");
		return ptr;
	}


	void PreExecute();
	void PostExecute();
	void Execute();
};


// Class V1CoreRuntime.InstantActorAction
// 0x0010 (0x0040 - 0x0030)
class UInstantActorAction : public UV1InstantAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class AActor*                                      m_actor;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.InstantActorAction");
		return ptr;
	}


	void SetActor(class AActor** Actor);
	class AActor* GetActor();
};


// Class V1CoreRuntime.ActionChangeActorTransform
// 0x0040 (0x0080 - 0x0040)
class UActionChangeActorTransform : public UInstantActorAction
{
public:
	bool                                               m_localSpace;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
	struct FTransform                                  m_transformDelta;                                         // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionChangeActorTransform");
		return ptr;
	}


	void SetTransformDelta(struct FTransform* transformDelta);
	void SetScaleDelta(struct FVector* scaleDelta);
	void SetRotationDelta(struct FRotator* rotationDelta);
	void SetPositionDelta(struct FVector* positionDelta);
	void SetLocalSpace(bool* localSpace);
	bool IsLocalSpace();
	struct FTransform GetTransformDelta();
	struct FVector GetScaleDelta();
	struct FRotator GetRotationDelta();
	struct FVector GetPositionDelta();
	class UActionChangeActorTransform* STATIC_CreateAction_ChangeActorTransform(class UObject** Outer, class AActor** Actor, bool* Local, struct FTransform* transformDelta);
};


// Class V1CoreRuntime.InstantComponentAction
// 0x0020 (0x0050 - 0x0030)
class UInstantComponentAction : public UV1InstantAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class AActor*                                      m_actor;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_componentName;                                          // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             m_component;                                              // 0x0048(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.InstantComponentAction");
		return ptr;
	}


	void SetComponentByActor(class AActor** Actor, struct FName* componentName);
	void SetComponent(class UActorComponent** Component);
	void SetActor(class AActor** Actor);
	class UActorComponent* GetComponent();
};


// Class V1CoreRuntime.ActionComponentInstantTransformBy
// 0x0040 (0x0090 - 0x0050)
class UActionComponentInstantTransformBy : public UInstantComponentAction
{
public:
	bool                                               m_local;                                                  // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
	struct FTransform                                  m_transform;                                              // 0x0060(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentInstantTransformBy");
		return ptr;
	}


	void SetTransform(struct FTransform* Transform);
	void SetLocal(bool* Local);
	struct FTransform GetTransform();
	bool GetLocal();
	class UActionComponentInstantTransformBy* STATIC_CreateAction_ComponentInstantTransformTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FTransform* Transform);
};


// Class V1CoreRuntime.ActionComponentInstantTransformTo
// 0x0040 (0x0090 - 0x0050)
class UActionComponentInstantTransformTo : public UInstantComponentAction
{
public:
	bool                                               m_local;                                                  // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0051(0x000F) MISSED OFFSET
	struct FTransform                                  m_transform;                                              // 0x0060(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentInstantTransformTo");
		return ptr;
	}


	void SetTransform(struct FTransform* Transform);
	void SetLocal(bool* Local);
	struct FTransform GetTransform();
	bool GetLocal();
	class UActionComponentInstantTransformTo* STATIC_CreateAction_ComponentInstantTransformTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FTransform* Transform);
};


// Class V1CoreRuntime.IntervalComponentAction
// 0x0020 (0x0058 - 0x0038)
class UIntervalComponentAction : public UV1IntervalAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class AActor*                                      m_actor;                                                  // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_componentName;                                          // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UActorComponent*                             m_component;                                              // 0x0050(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.IntervalComponentAction");
		return ptr;
	}


	void SetComponentByActor(class AActor** Actor, struct FName* componentName);
	void SetComponent(class UActorComponent** Component);
	void SetActor(class AActor** Actor);
	class UActorComponent* GetComponent();
};


// Class V1CoreRuntime.ActionComponentTransformBase
// 0x0038 (0x0090 - 0x0058)
class UActionComponentTransformBase : public UIntervalComponentAction
{
public:
	bool                                               m_localSpace;                                             // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EeActionTransformComponent                         m_transformComponent;                                     // 0x0059(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
	struct FTransform                                  m_transform;                                              // 0x0060(0x0030) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentTransformBase");
		return ptr;
	}


	void SetLocalSpace(bool* localSpace);
	bool IsLocalSpace();
};


// Class V1CoreRuntime.ActionComponentTransformBy
// 0x0040 (0x00D0 - 0x0090)
class UActionComponentTransformBy : public UActionComponentTransformBase
{
public:
	struct FTransform                                  m_lastTransform;                                          // 0x0090(0x0030) (Transient, IsPlainOldData)
	struct FVector                                     m_expectedScaleChange;                                    // 0x00C0(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentTransformBy");
		return ptr;
	}

};


// Class V1CoreRuntime.ActionComponentRotateBy
// 0x0010 (0x00E0 - 0x00D0)
class UActionComponentRotateBy : public UActionComponentTransformBy
{
public:
	struct FRotator                                    m_rotationDelta;                                          // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentRotateBy");
		return ptr;
	}


	void SetRotationDelta(struct FRotator* rotationDelta);
	struct FRotator GetRotationDelta();
	class UActionComponentRotateBy* STATIC_CreateAction_ComponentRotateBy(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FRotator* rotationDelta, float* Length);
};


// Class V1CoreRuntime.ActionComponentTransformTo
// 0x0030 (0x00C0 - 0x0090)
class UActionComponentTransformTo : public UActionComponentTransformBase
{
public:
	struct FTransform                                  m_startTransform;                                         // 0x0090(0x0030) (Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentTransformTo");
		return ptr;
	}

};


// Class V1CoreRuntime.ActionComponentRotateTo
// 0x0010 (0x00D0 - 0x00C0)
class UActionComponentRotateTo : public UActionComponentTransformTo
{
public:
	struct FRotator                                    m_rotation;                                               // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentRotateTo");
		return ptr;
	}


	void SetRotation(struct FRotator* Rotation);
	struct FRotator GetRotation();
	class UActionComponentRotateTo* STATIC_CreateAction_ComponentRotateTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FRotator* Rotation, float* Length);
};


// Class V1CoreRuntime.ActionComponentScaleBy
// 0x0010 (0x00E0 - 0x00D0)
class UActionComponentScaleBy : public UActionComponentTransformBy
{
public:
	struct FVector                                     m_scaleDelta;                                             // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentScaleBy");
		return ptr;
	}


	void SetScaleDelta(struct FVector* scaleDelta);
	struct FVector GetScaleDelta();
	class UActionComponentScaleBy* STATIC_CreateAction_ComponentScaleBy(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FVector* scaleDelta, float* Length);
};


// Class V1CoreRuntime.ActionComponentScaleTo
// 0x0010 (0x00E0 - 0x00D0)
class UActionComponentScaleTo : public UActionComponentTransformBy
{
public:
	struct FVector                                     m_scale;                                                  // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentScaleTo");
		return ptr;
	}


	void SetScale(struct FVector* Scale);
	struct FVector GetScale();
	class UActionComponentScaleTo* STATIC_CreateAction_ComponentScaleTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FVector* Scale, float* Length);
};


// Class V1CoreRuntime.ActionComponentSetVisibility
// 0x0008 (0x0058 - 0x0050)
class UActionComponentSetVisibility : public UInstantComponentAction
{
public:
	bool                                               m_visible;                                                // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_applyToChildren;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0052(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentSetVisibility");
		return ptr;
	}


	void SetVisible(bool* Visible);
	void SetApplyToChildren(bool* applyToChildren);
	bool GetVisible();
	bool GetApplyToChildren();
	class UActionComponentSetVisibility* STATIC_CreateAction_ComponentSetVisibility(class UObject** Outer, class USceneComponent** Component, bool* Visible, bool* applyToChildren);
};


// Class V1CoreRuntime.ActionComponentTranslateBy
// 0x0010 (0x00E0 - 0x00D0)
class UActionComponentTranslateBy : public UActionComponentTransformBy
{
public:
	struct FVector                                     m_translationDelta;                                       // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentTranslateBy");
		return ptr;
	}


	void SetPositionDelta(struct FVector* positionDelta);
	struct FVector GetPositionDelta();
	class UActionComponentTranslateBy* STATIC_CreateAction_ComponentTranslateBy(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FVector* translationDelta, float* Length);
};


// Class V1CoreRuntime.ActionComponentTranslateTo
// 0x0010 (0x00D0 - 0x00C0)
class UActionComponentTranslateTo : public UActionComponentTransformTo
{
public:
	struct FVector                                     m_translation;                                            // 0x00C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00CC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionComponentTranslateTo");
		return ptr;
	}


	void SetPosition(struct FVector* Position);
	struct FVector GetPosition();
	class UActionComponentTranslateTo* STATIC_CreateAction_ComponentTranslateTo(class UObject** Outer, class USceneComponent** Component, bool* Local, struct FVector* Translation, float* Length);
};


// Class V1CoreRuntime.ActionDestroyActor
// 0x0000 (0x0040 - 0x0040)
class UActionDestroyActor : public UInstantActorAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionDestroyActor");
		return ptr;
	}


	class UActionDestroyActor* STATIC_CreateAction_DestroyActor(class UObject** Outer, class AActor** Actor);
};


// Class V1CoreRuntime.V1ActionContainer
// 0x0010 (0x0040 - 0x0030)
class UV1ActionContainer : public UV1ActionBase
{
public:
	TArray<class UV1ActionBase*>                       m_actions;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionContainer");
		return ptr;
	}


	bool IsEmpty();
	TArray<class UV1ActionBase*> GetActions();
	int GetActionCount();
	void Clear();
	class UV1ActionBase* AddActionFront(class UV1ActionBase** Action);
	class UV1ActionBase* AddActionBack(class UV1ActionBase** Action);
};


// Class V1CoreRuntime.ActionRepeatFinite
// 0x0010 (0x0050 - 0x0040)
class UActionRepeatFinite : public UV1ActionContainer
{
public:
	int                                                m_iterations;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                m_sequencesCompleted;                                     // 0x0044(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                m_actionsCompleted;                                       // 0x0048(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionRepeatFinite");
		return ptr;
	}


	class UActionRepeatFinite* STATIC_CreateAction_ActionRepeatFinite(class UObject** Outer, int* iterations);
};


// Class V1CoreRuntime.ActionRepeatForever
// 0x0008 (0x0048 - 0x0040)
class UActionRepeatForever : public UV1ActionContainer
{
public:
	int                                                m_completed;                                              // 0x0040(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionRepeatForever");
		return ptr;
	}


	class UActionRepeatForever* STATIC_CreateAction_ActionRepeatForever(class UObject** Outer);
};


// Class V1CoreRuntime.ActionSetActorTransform
// 0x0040 (0x0080 - 0x0040)
class UActionSetActorTransform : public UInstantActorAction
{
public:
	bool                                               m_localSpace;                                             // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0041(0x000F) MISSED OFFSET
	struct FTransform                                  m_transform;                                              // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionSetActorTransform");
		return ptr;
	}


	void SetTransform(struct FTransform* transformDelta);
	void SetScale(struct FVector* scaleDelta);
	void SetRotation(struct FRotator* rotationDelta);
	void SetPosition(struct FVector* positionDelta);
	void SetLocalSpace(bool* localSpace);
	bool IsLocalSpace();
	struct FTransform GetTransform();
	struct FVector GetScale();
	struct FRotator GetRotation();
	struct FVector GetPosition();
	class UActionSetActorTransform* STATIC_CreateAction_SetActorTransform(class UObject** Outer, class AActor** Actor, bool* Local, struct FTransform* Transform);
};


// Class V1CoreRuntime.ActionSetActorVisibility
// 0x0008 (0x0048 - 0x0040)
class UActionSetActorVisibility : public UInstantActorAction
{
public:
	bool                                               m_visible;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_applyToChildren;                                        // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0042(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionSetActorVisibility");
		return ptr;
	}


	class UActionSetActorVisibility* STATIC_CreateAction_SetActorVisibility(class UObject** Outer, class AActor** Actor, bool* Visible, bool* applyToChildren);
};


// Class V1CoreRuntime.ActionSpawnActor
// 0x0050 (0x0080 - 0x0030)
class UActionSpawnActor : public UV1InstantAction
{
public:
	class UClass*                                      m_actorClass;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	struct FTransform                                  m_spawnTransform;                                         // 0x0040(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       m_actorName;                                              // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_actorTag;                                               // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionSpawnActor");
		return ptr;
	}


	void SetSpawnTransform(struct FTransform* SpawnTransform);
	void SetActorTag(struct FName* componentTag);
	void SetActorName(struct FName* actorName);
	void SetActorClass(class UClass** actorClass);
	struct FTransform GetSpawnTransform();
	struct FName GetActorTag();
	struct FName GetActorName();
	class UClass* GetActorClass();
	class UActionSpawnActor* STATIC_CreateAction_SpawnActor(class UObject** Outer, class UClass** actorClass, struct FTransform* SpawnTransform, struct FName* actorName, struct FName* actorTag);
};


// Class V1CoreRuntime.ActionSpawnComponent
// 0x0050 (0x0090 - 0x0040)
class UActionSpawnComponent : public UInstantActorAction
{
public:
	class UClass*                                      m_componentClass;                                         // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
	struct FTransform                                  m_spawnTransform;                                         // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FName                                       m_componentName;                                          // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_componentTag;                                           // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionSpawnComponent");
		return ptr;
	}


	void SetSpawnTransform(struct FTransform* SpawnTransform);
	void SetComponentTag(struct FName* componentTag);
	void SetComponentName(struct FName* componentName);
	void SetComponentClass(class UClass** actorClass);
	struct FTransform GetSpawnTransform();
	struct FName GetComponentTag();
	struct FName GetComponentName();
	class UClass* GetComponentClass();
	class UActionSpawnComponent* STATIC_CreateAction_SpawnComponent(class UObject** Outer, class AActor** Actor, class UClass** ComponentClass, struct FTransform* SpawnTransform, struct FName* componentName, struct FName* componentTag);
};


// Class V1CoreRuntime.V1ActionBaseMock
// 0x0000 (0x0030 - 0x0030)
class UV1ActionBaseMock : public UV1ActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionBaseMock");
		return ptr;
	}

};


// Class V1CoreRuntime.V1InstantActionMock
// 0x0000 (0x0030 - 0x0030)
class UV1InstantActionMock : public UV1InstantAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1InstantActionMock");
		return ptr;
	}

};


// Class V1CoreRuntime.V1IntervalActionMock
// 0x0000 (0x0038 - 0x0038)
class UV1IntervalActionMock : public UV1IntervalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1IntervalActionMock");
		return ptr;
	}

};


// Class V1CoreRuntime.IntervalUMGAction
// 0x0010 (0x0048 - 0x0038)
class UIntervalUMGAction : public UV1IntervalAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class UWidget*                                     m_widget;                                                 // 0x0040(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.IntervalUMGAction");
		return ptr;
	}


	void SetWidget(class UWidget** Widget);
	class UWidget* GetWidget();
};


// Class V1CoreRuntime.ActionUMGFadeAlphaTo
// 0x0030 (0x0078 - 0x0048)
class UActionUMGFadeAlphaTo : public UIntervalUMGAction
{
public:
	float                                              m_targetAlpha;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_startAlpha;                                             // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUMGColorWrapper                            m_colorWrapper;                                           // 0x0050(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGFadeAlphaTo");
		return ptr;
	}


	void SetTargetAlpha(float* targetAlpha);
	float GetTargetAlpha();
	class UActionUMGFadeAlphaTo* STATIC_CreateAction_UMGFadeAlphaTo(class UObject** Outer, class UWidget** Widget, float* targetAlpha, float* Length);
};


// Class V1CoreRuntime.ActionUMGFadeColorTo
// 0x0048 (0x0090 - 0x0048)
class UActionUMGFadeColorTo : public UIntervalUMGAction
{
public:
	struct FLinearColor                                m_color;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                m_startColor;                                             // 0x0058(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUMGColorWrapper                            m_colorWrapper;                                           // 0x0068(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGFadeColorTo");
		return ptr;
	}


	void SetFadeColor(struct FLinearColor* Color);
	struct FLinearColor GetFadeColor();
	class UActionUMGFadeColorTo* STATIC_CreateAction_UMGFadeColorTo(class UObject** Outer, class UWidget** Widget, struct FLinearColor* Color, float* Length);
};


// Class V1CoreRuntime.ActionUMGMultiplyAlphaBy
// 0x0030 (0x0078 - 0x0048)
class UActionUMGMultiplyAlphaBy : public UIntervalUMGAction
{
public:
	float                                              m_alphaScalar;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              m_startAlpha;                                             // 0x004C(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FUMGColorWrapper                            m_colorWrapper;                                           // 0x0050(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGMultiplyAlphaBy");
		return ptr;
	}


	void SetAlphaScalar(float* alphaScalar);
	float GetAlphaScalar();
	class UActionUMGMultiplyAlphaBy* STATIC_CreateAction_UMGMultiplyAlphaBy(class UObject** Outer, class UWidget** Widget, float* alphaScalar, float* Length);
};


// Class V1CoreRuntime.ActionUMGMultiplyColorBy
// 0x0048 (0x0090 - 0x0048)
class UActionUMGMultiplyColorBy : public UIntervalUMGAction
{
public:
	struct FVector                                     m_colorScalar;                                            // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                m_startColor;                                             // 0x0054(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FUMGColorWrapper                            m_colorWrapper;                                           // 0x0068(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGMultiplyColorBy");
		return ptr;
	}


	void SetColorScalar(struct FVector* colorScalar);
	struct FVector GetColorScalar();
	class UActionUMGMultiplyColorBy* STATIC_CreateAction_UMGMultiplyColorBy(class UObject** Outer, class UWidget** Widget, struct FVector* colorScalar, float* Length);
};


// Class V1CoreRuntime.InstantUMGAction
// 0x0010 (0x0040 - 0x0030)
class UInstantUMGAction : public UV1InstantAction
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
	class UWidget*                                     m_widget;                                                 // 0x0038(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.InstantUMGAction");
		return ptr;
	}


	void SetWidget(class UWidget** Widget);
	class UWidget* GetWidget();
};


// Class V1CoreRuntime.ActionUMGRemoveFromParent
// 0x0000 (0x0040 - 0x0040)
class UActionUMGRemoveFromParent : public UInstantUMGAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGRemoveFromParent");
		return ptr;
	}


	class UActionUMGRemoveFromParent* STATIC_CreateAction_UMGRemoveFromParent(class UObject** Outer, class UWidget** Widget);
};


// Class V1CoreRuntime.ActionUMGTransformBase
// 0x0028 (0x0070 - 0x0048)
class UActionUMGTransformBase : public UIntervalUMGAction
{
public:
	EeActionUMGTransformComponent                      m_transformComponent;                                     // 0x0048(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FUMGActionTransform                         m_transform;                                              // 0x004C(0x0024) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGTransformBase");
		return ptr;
	}

};


// Class V1CoreRuntime.ActionUMGTransformBy
// 0x0030 (0x00A0 - 0x0070)
class UActionUMGTransformBy : public UActionUMGTransformBase
{
public:
	struct FUMGActionTransform                         m_lastTransform;                                          // 0x0070(0x0024) (Transient)
	struct FVector2D                                   m_expectedScaleChange;                                    // 0x0094(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x009C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGTransformBy");
		return ptr;
	}

};


// Class V1CoreRuntime.ActionUMGRotateBy
// 0x0008 (0x00A8 - 0x00A0)
class UActionUMGRotateBy : public UActionUMGTransformBy
{
public:
	float                                              m_rotationDelta;                                          // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGRotateBy");
		return ptr;
	}


	void SetRotationDelta(float* rotationDelta);
	float GetRotationDelta();
	class UActionUMGRotateBy* STATIC_CreateAction_UMGRotateBy(class UObject** Outer, class UWidget** Widget, float* rotationDelta, float* Length);
};


// Class V1CoreRuntime.ActionUMGTransformTo
// 0x0048 (0x00B8 - 0x0070)
class UActionUMGTransformTo : public UActionUMGTransformBase
{
public:
	struct FUMGActionTransform                         m_startTransform;                                         // 0x0070(0x0024) (Transient)
	struct FUMGActionTransform                         m_deltaTransform;                                         // 0x0094(0x0024) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGTransformTo");
		return ptr;
	}

};


// Class V1CoreRuntime.ActionUMGRotateTo
// 0x0008 (0x00C0 - 0x00B8)
class UActionUMGRotateTo : public UActionUMGTransformTo
{
public:
	float                                              m_rotation;                                               // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGRotateTo");
		return ptr;
	}


	void SetRotation(float* Rotation);
	float GetRotation();
	class UActionUMGRotateTo* STATIC_CreateAction_UMGRotateTo(class UObject** Outer, class UWidget** Widget, float* Rotation, float* Length);
};


// Class V1CoreRuntime.ActionUMGScaleBy
// 0x0008 (0x00A8 - 0x00A0)
class UActionUMGScaleBy : public UActionUMGTransformBy
{
public:
	struct FVector2D                                   m_scaleDelta;                                             // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGScaleBy");
		return ptr;
	}


	void SetScaleDelta(struct FVector2D* scaleDelta);
	struct FVector2D GetScaleDelta();
	class UActionUMGScaleBy* STATIC_CreateAction_UMGScaleBy(class UObject** Outer, class UWidget** Widget, struct FVector2D* scaleDelta, float* Length);
};


// Class V1CoreRuntime.ActionUMGScaleTo
// 0x0008 (0x00C0 - 0x00B8)
class UActionUMGScaleTo : public UActionUMGTransformTo
{
public:
	struct FVector2D                                   m_scale;                                                  // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGScaleTo");
		return ptr;
	}


	void SetScale(struct FVector2D* Scale);
	struct FVector2D GetScale();
	class UActionUMGScaleTo* STATIC_CreateAction_UMGScaleTo(class UObject** Outer, class UWidget** Widget, struct FVector2D* Scale, float* Length);
};


// Class V1CoreRuntime.ActionUMGTranslateBy
// 0x0008 (0x00A8 - 0x00A0)
class UActionUMGTranslateBy : public UActionUMGTransformBy
{
public:
	struct FVector2D                                   m_translationDelta;                                       // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGTranslateBy");
		return ptr;
	}


	void SetPositionDelta(struct FVector2D* positionDelta);
	struct FVector2D GetPositionDelta();
	class UActionUMGTranslateBy* STATIC_CreateAction_UMGTranslateBy(class UObject** Outer, class UWidget** Widget, struct FVector2D* translationDelta, float* Length);
};


// Class V1CoreRuntime.ActionUMGTranslateTo
// 0x0008 (0x00C0 - 0x00B8)
class UActionUMGTranslateTo : public UActionUMGTransformTo
{
public:
	struct FVector2D                                   m_translation;                                            // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActionUMGTranslateTo");
		return ptr;
	}


	void SetPosition(struct FVector2D* Position);
	struct FVector2D GetPosition();
	class UActionUMGTranslateTo* STATIC_CreateAction_UMGTranslateTo(class UObject** Outer, class UWidget** Widget, struct FVector2D* Translation, float* Length);
};


// Class V1CoreRuntime.ActorActionInterface
// 0x0000 (0x0028 - 0x0028)
class UActorActionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActorActionInterface");
		return ptr;
	}


	void SetActor(class AActor** Actor);
	class AActor* GetActor();
};


// Class V1CoreRuntime.ActorLifeCycleComponent
// 0x03D8 (0x0500 - 0x0128)
class UActorLifeCycleComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3C0];                                     // 0x0128(0x03C0) MISSED OFFSET
	EeActorLifeCycleState                              m_clientDesiredState;                                     // 0x04E8(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E9(0x0007) MISSED OFFSET
	TArray<struct FStateExitWait>                      m_stateExitWaits;                                         // 0x04F0(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActorLifeCycleComponent");
		return ptr;
	}


	void Server_DummyRPC();
};


// Class V1CoreRuntime.ActorLifeCycleInterface
// 0x0000 (0x0028 - 0x0028)
class UActorLifeCycleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ActorLifeCycleInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1EventBase
// 0x0010 (0x0038 - 0x0028)
class UV1EventBase : public UObject
{
public:
	class UObject*                                     Source;                                                   // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1EventBase");
		return ptr;
	}

};


// Class V1CoreRuntime.InstigatorEvent
// 0x0030 (0x0068 - 0x0038)
class UInstigatorEvent : public UV1EventBase
{
public:
	class AActor*                                      Instigator;                                               // 0x0038(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class APlayerController*                           instigatorController;                                     // 0x0040(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0048(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.InstigatorEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.ApplyGameplayEffectEvent
// 0x0160 (0x01C8 - 0x0068)
class UApplyGameplayEffectEvent : public UInstigatorEvent
{
public:
	class UClass*                                      EffectClass;                                              // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FV1GameplayEffectSpec                       effectSpec;                                               // 0x0070(0x0148) (Edit, BlueprintVisible)
	class UActorComponent*                             instigatorComponent;                                      // 0x01B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1GameplayEffect*                           constructedEffect;                                        // 0x01C0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ApplyGameplayEffectEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AudioManagerInterface
// 0x0000 (0x0028 - 0x0028)
class UV1AudioManagerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AudioManagerInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.AudioManager
// 0x0148 (0x0170 - 0x0028)
class UAudioManager : public UObject
{
public:
	uint64_t                                           m_globalAudioObjectId;                                    // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     m_globalAudioObjectName;                                  // 0x0030(0x0010) (Edit, ZeroConstructor)
	class UAkAudioEvent*                               m_startGlobalMusicEvent;                                  // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_stopGlobalMusicEvent;                                   // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_duckAudioForTalkersEvent;                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_unduckAudioForTalkersEvent;                             // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                m_playersTalking;                                         // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TArray<class UAkAudioBank*>                        m_globalBanks;                                            // 0x0068(0x0010) (Edit, ZeroConstructor)
	bool                                               m_globalRegistered;                                       // 0x0078(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF7];                                      // 0x0079(0x00F7) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.AudioManager");
		return ptr;
	}

};


// Class V1CoreRuntime.OnEnterActorLifeCycleStateEvent
// 0x0008 (0x0040 - 0x0038)
class UOnEnterActorLifeCycleStateEvent : public UV1EventBase
{
public:
	class UActorLifeCycleComponent*                    ActorLifeCycleComponent;                                  // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OnEnterActorLifeCycleStateEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.BeginActorLifeCycleEvent
// 0x0000 (0x0040 - 0x0040)
class UBeginActorLifeCycleEvent : public UOnEnterActorLifeCycleStateEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.BeginActorLifeCycleEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.BroadcastInputKeyEvent
// 0x0098 (0x00D0 - 0x0038)
class UBroadcastInputKeyEvent : public UV1EventBase
{
public:
	unsigned char                                      Handled : 1;                                              // 0x0038(0x0001) (Transient)
	TEnumAsByte<EInputEvent>                           InputEvent;                                               // 0x0039(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x003A(0x0006) MISSED OFFSET
	struct FPointerEvent                               PointerEvent;                                             // 0x0040(0x0070) (Transient)
	struct FKey                                        Key;                                                      // 0x00B0(0x0018) (Transient)
	unsigned char                                      isPointerEvent : 1;                                       // 0x00C8(0x0001) (Transient)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.BroadcastInputKeyEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.BroadcastPauseMenuEvent
// 0x0008 (0x0040 - 0x0038)
class UBroadcastPauseMenuEvent : public UV1EventBase
{
public:
	unsigned char                                      Handled : 1;                                              // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.BroadcastPauseMenuEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.CinematicCameraControlComponent
// 0x0020 (0x0930 - 0x0910)
class UCinematicCameraControlComponent : public UCineCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0910(0x0004) MISSED OFFSET
	float                                              m_focusDistanceInputSpeed;                                // 0x0914(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_apertureAdjustInputSpeed;                               // 0x0918(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x091C(0x0004) MISSED OFFSET
	class AActor*                                      m_lookAtTrackActor;                                       // 0x0920(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_lookAtInterpSpeed;                                      // 0x0928(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_isTrackingLookAt : 1;                                   // 0x092C(0x0001) (Transient)
	unsigned char                                      UnknownData02[0x3];                                       // 0x092D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.CinematicCameraControlComponent");
		return ptr;
	}

};


// Class V1CoreRuntime.ComponentActionInterface
// 0x0000 (0x0028 - 0x0028)
class UComponentActionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ComponentActionInterface");
		return ptr;
	}


	void SetComponentByActor(class AActor** Actor, struct FName* componentName);
	void SetComponent(class UActorComponent** Component);
	void SetActor(class AActor** Actor);
	class UActorComponent* GetComponent();
};


// Class V1CoreRuntime.CoreRuntimeSettings
// 0x0008 (0x0030 - 0x0028)
class UCoreRuntimeSettings : public UObject
{
public:
	float                                              defaultAudioOcclusionRefreshInterval;                     // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.CoreRuntimeSettings");
		return ptr;
	}

};


// Class V1CoreRuntime.CustomBoundsInterface
// 0x0000 (0x0028 - 0x0028)
class UCustomBoundsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.CustomBoundsInterface");
		return ptr;
	}


	void GetCustomBounds(struct FVector* WorldOrigin, struct FVector* halfExtents);
};


// Class V1CoreRuntime.EaseActionExponentialBase
// 0x0010 (0x0048 - 0x0038)
class UEaseActionExponentialBase : public UV1IntervalAction
{
public:
	class UV1IntervalAction*                           m_action;                                                 // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              m_rate;                                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.EaseActionExponentialBase");
		return ptr;
	}


	void SetRate(float* Rate);
	void SetAction(class UV1IntervalAction** Action);
	float GetRate();
};


// Class V1CoreRuntime.EaseActionExponentialIn
// 0x0000 (0x0048 - 0x0048)
class UEaseActionExponentialIn : public UEaseActionExponentialBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.EaseActionExponentialIn");
		return ptr;
	}

};


// Class V1CoreRuntime.EaseActionExponentialInOut
// 0x0000 (0x0048 - 0x0048)
class UEaseActionExponentialInOut : public UEaseActionExponentialBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.EaseActionExponentialInOut");
		return ptr;
	}

};


// Class V1CoreRuntime.EaseActionExponentialOut
// 0x0000 (0x0048 - 0x0048)
class UEaseActionExponentialOut : public UEaseActionExponentialBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.EaseActionExponentialOut");
		return ptr;
	}

};


// Class V1CoreRuntime.EasingActionStatics
// 0x0000 (0x0028 - 0x0028)
class UEasingActionStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.EasingActionStatics");
		return ptr;
	}


	class UEaseActionExponentialOut* STATIC_CreateEaseActionExponentialOut(class UObject** Outer, class UV1IntervalAction** Action, float* Rate);
	class UEaseActionExponentialInOut* STATIC_CreateEaseActionExponentialInOut(class UObject** Outer, class UV1IntervalAction** Action, float* Rate);
	class UEaseActionExponentialIn* STATIC_CreateEaseActionExponentialIn(class UObject** Outer, class UV1IntervalAction** Action, float* Rate);
};


// Class V1CoreRuntime.GameplayCategoryUpdatedEvent
// 0x0010 (0x0048 - 0x0038)
class UGameplayCategoryUpdatedEvent : public UV1EventBase
{
public:
	EeGameplayCategoryChange                           change;                                                   // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	struct FGameplayTag                                Category;                                                 // 0x003C(0x0008) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0044(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.GameplayCategoryUpdatedEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.KillActorEvent
// 0x0010 (0x0048 - 0x0038)
class UKillActorEvent : public UV1EventBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.KillActorEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.MeshInterface
// 0x0000 (0x0028 - 0x0028)
class UMeshInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.MeshInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.OnEnterAliveEvent
// 0x0000 (0x0040 - 0x0040)
class UOnEnterAliveEvent : public UOnEnterActorLifeCycleStateEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OnEnterAliveEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.OnEnterDeadEvent
// 0x0000 (0x0040 - 0x0040)
class UOnEnterDeadEvent : public UOnEnterActorLifeCycleStateEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OnEnterDeadEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.BroadcastOnEnterDeadEvent
// 0x0000 (0x0040 - 0x0040)
class UBroadcastOnEnterDeadEvent : public UOnEnterActorLifeCycleStateEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.BroadcastOnEnterDeadEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.OnEnterDyingEvent
// 0x0000 (0x0040 - 0x0040)
class UOnEnterDyingEvent : public UOnEnterActorLifeCycleStateEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OnEnterDyingEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.OnEnterIncapacitatedEvent
// 0x0000 (0x0040 - 0x0040)
class UOnEnterIncapacitatedEvent : public UOnEnterActorLifeCycleStateEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OnEnterIncapacitatedEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.BroadcastOnEnterIncapacitatedEvent
// 0x0000 (0x0040 - 0x0040)
class UBroadcastOnEnterIncapacitatedEvent : public UOnEnterActorLifeCycleStateEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.BroadcastOnEnterIncapacitatedEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.OnEnterSpawningEvent
// 0x0000 (0x0040 - 0x0040)
class UOnEnterSpawningEvent : public UOnEnterActorLifeCycleStateEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OnEnterSpawningEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.OnLocalPlayerPossessPawnEvent
// 0x0010 (0x0048 - 0x0038)
class UOnLocalPlayerPossessPawnEvent : public UV1EventBase
{
public:
	class APlayerController*                           PlayerController;                                         // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class APawn*                                       playerPawn;                                               // 0x0040(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OnLocalPlayerPossessPawnEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.OnLocalPlayerUnPossessPawnEvent
// 0x0008 (0x0040 - 0x0038)
class UOnLocalPlayerUnPossessPawnEvent : public UV1EventBase
{
public:
	class APlayerController*                           PlayerController;                                         // 0x0038(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OnLocalPlayerUnPossessPawnEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.OpenPlayerChatBoxEvent
// 0x0008 (0x0040 - 0x0038)
class UOpenPlayerChatBoxEvent : public UV1EventBase
{
public:
	bool                                               Handled;                                                  // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.OpenPlayerChatBoxEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.PostAudioEvent
// 0x0028 (0x0060 - 0x0038)
class UPostAudioEvent : public UV1EventBase
{
public:
	class UAkAudioEvent*                               akEvent;                                                  // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FPostAudioRTPCParam>                 RTPCs;                                                    // 0x0040(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      stopSoundOnOwnerDestroy : 1;                              // 0x0050(0x0001)
	unsigned char                                      playAtLocation : 1;                                       // 0x0050(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.PostAudioEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.RemoveGameplayEffectEvent
// 0x0008 (0x0070 - 0x0068)
class URemoveGameplayEffectEvent : public UInstigatorEvent
{
public:
	struct FGameplayTag                                gameplayEffectTag;                                        // 0x0068(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.RemoveGameplayEffectEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.ReviveActorEvent
// 0x0000 (0x0038 - 0x0038)
class UReviveActorEvent : public UV1EventBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ReviveActorEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.StatRecordingInterface
// 0x0000 (0x0028 - 0x0028)
class UStatRecordingInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.StatRecordingInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1UserWidget
// 0x0008 (0x0238 - 0x0230)
class UV1UserWidget : public UUserWidget
{
public:
	TWeakObjectPtr<class APawn>                        m_pawnContext;                                            // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1UserWidget");
		return ptr;
	}

};


// Class V1CoreRuntime.StatsWidget
// 0x0018 (0x0250 - 0x0238)
class UStatsWidget : public UV1UserWidget
{
public:
	class UV1TextBlock*                                m_fpsText;                                                // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1TextBlock*                                m_pingText;                                               // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.StatsWidget");
		return ptr;
	}

};


// Class V1CoreRuntime.V1TimeDilationComponent
// 0x0048 (0x0170 - 0x0128)
class UV1TimeDilationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0128(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1TimeDilationComponent");
		return ptr;
	}


	void STATIC_S_RequestActorTimeDilation_BP(class AActor** targetActor, class UObject** requestingObject, struct FTimeDilationRequest* request);
	void STATIC_S_EndActorTimeDilationRequest(class AActor** targetActor, class UObject** requestingObject);
};


// Class V1CoreRuntime.TimeDilationInterface
// 0x0000 (0x0028 - 0x0028)
class UTimeDilationInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.TimeDilationInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.ToggleAudioMuteEvent
// 0x0008 (0x0040 - 0x0038)
class UToggleAudioMuteEvent : public UV1EventBase
{
public:
	bool                                               isMuted;                                                  // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.ToggleAudioMuteEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.UMGActionInterface
// 0x0000 (0x0028 - 0x0028)
class UUMGActionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.UMGActionInterface");
		return ptr;
	}


	void SetWidget(class UWidget** Widget);
	class UWidget* GetWidget();
};


// Class V1CoreRuntime.UpdateRTPCsEvent
// 0x0010 (0x0048 - 0x0038)
class UUpdateRTPCsEvent : public UV1EventBase
{
public:
	TArray<struct FPostAudioRTPCParam>                 RTPCs;                                                    // 0x0038(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.UpdateRTPCsEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AbilityElement
// 0x0010 (0x0038 - 0x0028)
class UV1AbilityElement : public UObject
{
public:
	class UV1GameplayAbility*                          m_owningAbility;                                          // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_replicates;                                             // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AbilityElement");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AbilitySystemComponent
// 0x0000 (0x11C0 - 0x11C0)
class UV1AbilitySystemComponent : public UAbilitySystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AbilitySystemComponent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ActionAsset
// 0x0008 (0x0030 - 0x0028)
class UV1ActionAsset : public UObject
{
public:
	class UV1ActionBase*                               m_action;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionAsset");
		return ptr;
	}


	class UV1ActionBase* GetAction();
};


// Class V1CoreRuntime.V1ActionAssetExecutor
// 0x0010 (0x0040 - 0x0030)
class UV1ActionAssetExecutor : public UV1ActionBase
{
public:
	class UClass*                                      m_actionAsset;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UV1ActionBase*                               m_actionInstance;                                         // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionAssetExecutor");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ActionClip
// 0x0060 (0x0088 - 0x0028)
class UV1ActionClip : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UClass*                                      m_actionAssetClass;                                       // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FV1ActionContext                            m_actionContext;                                          // 0x0038(0x0020) (Edit, BlueprintVisible)
	bool                                               m_tickWhenPaused;                                         // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	class UV1ActionBase*                               m_actionInstance;                                         // 0x0060(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_playing;                                                // 0x0068(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1F];                                      // 0x0069(0x001F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionClip");
		return ptr;
	}


	void Stop();
	void SetContext(struct FV1ActionContext* Context);
	void PlayWithContext(struct FV1ActionContext* Context);
	void Play();
	void Pause();
	struct FV1ActionContext GetContext();
	void Continue();
};


// Class V1CoreRuntime.V1ActionList
// 0x0050 (0x0080 - 0x0030)
class UV1ActionList : public UV1ActionBase
{
public:
	TMap<int, class UV1ActionSequence*>                m_lanes;                                                  // 0x0030(0x0050) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionList");
		return ptr;
	}


	bool IsLaneEmpty(int* lane);
	int GetLaneCount();
	int GetLaneActionCount(int* lane);
	int GetActionCount();
	class UV1ActionList* STATIC_CreateAction_ActionList(class UObject** Outer);
	void ClearLane(int* lane);
	void ClearAll(int* lane);
	class UV1ActionBase* AddActionFront(int* lane, class UV1ActionBase** Action);
	class UV1ActionBase* AddActionBack(int* lane, class UV1ActionBase** Action);
};


// Class V1CoreRuntime.V1ActionListComponent
// 0x0038 (0x0160 - 0x0128)
class UV1ActionListComponent : public UActorComponent
{
public:
	class UV1ActionList*                               m_actionList;                                             // 0x0128(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               m_useSelfForActions;                                      // 0x0130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               m_overrideComponentActions;                               // 0x0131(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0132(0x0002) MISSED OFFSET
	struct FName                                       m_componentName;                                          // 0x0134(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FV1ActionContext                            m_actionContext;                                          // 0x0140(0x0020) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionListComponent");
		return ptr;
	}


	class UV1ActionList* GetActionList();
};


// Class V1CoreRuntime.V1ActionSequence
// 0x0010 (0x0050 - 0x0040)
class UV1ActionSequence : public UV1ActionContainer
{
public:
	TArray<class UV1ActionBase*>                       m_toRemove;                                               // 0x0040(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ActionSequence");
		return ptr;
	}


	class UV1ActionSequence* STATIC_CreateAction_ActionSequence(class UObject** Outer);
};


// Class V1CoreRuntime.V1AIEvaluatorInterface
// 0x0000 (0x0028 - 0x0028)
class UV1AIEvaluatorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AIEvaluatorInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AIEvaluationManager
// 0x0028 (0x0050 - 0x0028)
class UV1AIEvaluationManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	float                                              m_maxAllowedEvaluationTimeInMilliseconds;                 // 0x0030(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1C];                                      // 0x0034(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AIEvaluationManager");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AIMovementLogic
// 0x0000 (0x0028 - 0x0028)
class UV1AIMovementLogic : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AIMovementLogic");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AIMovementProfile
// 0x00E0 (0x0110 - 0x0030)
class UV1AIMovementProfile : public UDataAsset
{
public:
	struct FAIMovementConfiguration                    m_mainMovementConfigurations[0x6];                        // 0x0030(0x0018) (Edit, DisableEditOnInstance)
	TMap<struct FGameplayTag, struct FAIMovementConfiguration> m_tagBasedMovementConfigurations;                         // 0x00C0(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AIMovementProfile");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AISystem
// 0x0008 (0x0138 - 0x0130)
class UV1AISystem : public UAISystem
{
public:
	class UV1AIEvaluationManager*                      m_evaluationManager;                                      // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AISystem");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AttributeMod
// 0x0020 (0x0048 - 0x0028)
class UV1AttributeMod : public UObject
{
public:
	struct FV1AttributeModData                         m_data;                                                   // 0x0028(0x0018) (Edit)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AttributeMod");
		return ptr;
	}


	void SetPostPercentageAdd(float* postPercentageAdd);
	void SetPostMultiplier(float* postMultiplier);
	void SetPostConstantAdd(float* postConstantAdd);
	void SetModData(struct FV1AttributeModData* modData);
	void SetBasePercentageAdd(float* basePercentageAdd);
	void SetBaseMultiplier(float* baseMultiplier);
	void SetBaseConstantAdd(float* baseConstantAdd);
};


// Class V1CoreRuntime.V1AttributeModifier
// 0x0040 (0x0068 - 0x0028)
class UV1AttributeModifier : public UObject
{
public:
	struct FV1AttributeModData                         m_combinedModData;                                        // 0x0028(0x0018) (Edit, Transient, EditConst)
	unsigned char                                      m_isDirty : 1;                                            // 0x0040(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	TArray<TWeakObjectPtr<class UV1AttributeMod>>      m_mods;                                                   // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, Transient, EditConst)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AttributeModifier");
		return ptr;
	}


	void RemoveMod(class UV1AttributeMod** mod);
	struct FV1AttributeModData GetCurrentModData();
	void AddMod(class UV1AttributeMod** mod);
};


// Class V1CoreRuntime.V1AttributeBase
// 0x0018 (0x0040 - 0x0028)
class UV1AttributeBase : public UObject
{
public:
	struct FGameplayTag                                m_attributeTypeTag;                                       // 0x0028(0x0008)
	class UV1AttributesComponent*                      m_owningAttributesComponent;                              // 0x0030(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      m_isDirty : 1;                                            // 0x0038(0x0001) (Transient)
	unsigned char                                      m_isReplicated : 1;                                       // 0x0038(0x0001)
	unsigned char                                      m_ignoreForReplication : 1;                               // 0x0038(0x0001)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AttributeBase");
		return ptr;
	}


	struct FGameplayTag GetAttributeTypeTag();
};


// Class V1CoreRuntime.V1Attribute
// 0x0058 (0x0098 - 0x0040)
class UV1Attribute : public UV1AttributeBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	float                                              m_baseMaxValue;                                           // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_currentValue;                                           // 0x005C(0x0004) (Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	float                                              m_previousValue;                                          // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_modifiedMaxValue;                                       // 0x0064(0x0004) (Edit, Net, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0068(0x0004) MISSED OFFSET
	struct FV1AttributeModData                         m_combinedModData;                                        // 0x006C(0x0018) (Edit, Net, Transient, EditConst)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class UV1AttributeModifier>> m_modifiers;                                              // 0x0088(0x0010) (Edit, ExportObject, ZeroConstructor, Transient, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1Attribute");
		return ptr;
	}


	void SetCurrentToMax(struct FV1AttributeInstigator* Instigator);
	void SetCurrentPercentage(float* percentage, struct FV1AttributeInstigator* Instigator);
	void RemoveMaxModifier(class UV1AttributeModifier** modifier);
	void OnRep_ModifiedMaxValue();
	void OnRep_CurrentValue();
	void OnRep_CombinedModData();
	void InitializeCurrentValue(float* percentageOfMax);
	int GetMaxAsInt();
	float GetMax();
	float GetCurrentPercentage();
	int GetCurrentAsInt();
	float GetCurrent();
	void AddPercentageOfMaxToCurrent(float* percentageAmount, struct FV1AttributeInstigator* Instigator);
	void AddMaxModifier(class UV1AttributeModifier** modifier);
	void AddConstantToCurrent(float* Amount, struct FV1AttributeInstigator* Instigator);
};


// Class V1CoreRuntime.V1AttributesComponent
// 0x00B0 (0x01D8 - 0x0128)
class UV1AttributesComponent : public UActorComponent
{
public:
	TMap<struct FGameplayTag, class UV1AttributeBase*> m_runtimeAttributes;                                      // 0x0128(0x0050) (Edit, ExportObject, ZeroConstructor, Transient, EditConst)
	TArray<class UV1AttributeBase*>                    m_runtimeAttributesArray;                                 // 0x0178(0x0010) (ExportObject, ZeroConstructor, Transient)
	TMap<struct FGameplayTag, class UV1AttributeModifier*> m_masterModifiers;                                        // 0x0188(0x0050) (Edit, ExportObject, ZeroConstructor, Transient, EditConst)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AttributesComponent");
		return ptr;
	}


	bool STATIC_S_GetStatusAttributeValue(class AActor** Actor, struct FGameplayTag* attributeType, bool* DefaultValue);
	class UV1StatusAttribute* STATIC_S_GetStatusAttribute(class AActor** Actor, struct FGameplayTag* attributeType);
	float STATIC_S_GetFloatAttributeValue(class AActor** Actor, struct FGameplayTag* attributeType, float* DefaultValue);
	float STATIC_S_GetFloatAttributePercentage(class AActor** Actor, struct FGameplayTag* attributeType, float* DefaultValue);
	class UV1Attribute* STATIC_S_GetFloatAttribute(class AActor** Actor, struct FGameplayTag* attributeType);
	class UV1AttributesComponent* STATIC_S_GetAttributesComponent(class AActor** Actor);
	class UV1AttributesComponent* STATIC_S_Get(class AActor** Actor);
	void RemoveMod(struct FGameplayTag* attributeType, class UV1AttributeMod** mod);
	class UV1StatusAttribute* GetStatusAttribute(struct FGameplayTag* attributeType);
	class UV1AttributeModifier* GetModifier(struct FGameplayTag* attributeType);
	class UV1Attribute* GetFloatAttribute(struct FGameplayTag* attributeType);
	void AddMod(struct FGameplayTag* attributeType, class UV1AttributeMod** mod);
};


// Class V1CoreRuntime.V1AttributesInterface
// 0x0000 (0x0028 - 0x0028)
class UV1AttributesInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AttributesInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AudioComponent
// 0x0060 (0x04D0 - 0x0470)
class UV1AudioComponent : public UAkComponent
{
public:
	float                                              m_soundFadeTimeOnDestroy;                                 // 0x0470(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5C];                                      // 0x0474(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AudioComponent");
		return ptr;
	}


	void STATIC_S_StopAudioEvent(int* eventId, class AActor** Actor);
	int STATIC_S_PostAudioEvent(class UAkAudioEvent** akEvent, class AActor** Actor, bool* stopOnDestroy);
	class UV1AudioComponent* STATIC_S_CreateAudioComponent(class AActor** Owner, bool* autoDestroyOnComplete, struct FVector* WorldLocation);
	int PostAudioEvent_BP(class UAkAudioEvent** audioEvent);
};


// Class V1CoreRuntime.V1AudioInterface
// 0x0000 (0x0028 - 0x0028)
class UV1AudioInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AudioInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AudioVoice
// 0x0030 (0x0058 - 0x0028)
class UV1AudioVoice : public UObject
{
public:
	uint64_t                                           m_id;                                                     // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FString                                     m_akName;                                                 // 0x0030(0x0010) (ZeroConstructor, Transient)
	struct FVector                                     m_worldPosition;                                          // 0x0040(0x000C) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_available;                                              // 0x004C(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	uint32_t                                           m_akPlayId;                                               // 0x0050(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AudioVoice");
		return ptr;
	}

};


// Class V1CoreRuntime.V1BroadcastInputBindingChangeEvent
// 0x0000 (0x0038 - 0x0038)
class UV1BroadcastInputBindingChangeEvent : public UV1EventBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1BroadcastInputBindingChangeEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1Button
// 0x0650 (0x0770 - 0x0120)
class UV1Button : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0120(0x0028) MISSED OFFSET
	class USlateWidgetStyleAsset*                      m_buttonWidgetStyle;                                      // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_fontWidgetStyle;                                        // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       m_buttonText;                                             // 0x0158(0x0018) (Edit)
	struct FText                                       m_menuToolTipText;                                        // 0x0170(0x0018) (Edit, BlueprintVisible)
	TArray<struct FToolTipContext>                     m_toolTipContexts;                                        // 0x0188(0x0010) (Edit, ZeroConstructor)
	struct FTextBlockStyle                             m_fontStyle;                                              // 0x0198(0x0268) (Edit, BlueprintVisible)
	bool                                               m_useText;                                                // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FButtonStyle                                m_instanceButtonWidgetStyle;                              // 0x0408(0x0278) (Edit, BlueprintVisible)
	struct FLinearColor                                m_colorAndOpacity;                                        // 0x0680(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                m_backgroundColor;                                        // 0x0690(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonClickMethod>                    m_clickMethod;                                            // 0x06A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonTouchMethod>                    m_touchMethod;                                            // 0x06A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EButtonPressMethod>                    m_pressMethod;                                            // 0x06A2(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_isFocusable;                                            // 0x06A3(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x06A4(0x0004) MISSED OFFSET
	struct FV1MenuActions                              m_menuActions;                                            // 0x06A8(0x0040) (Edit)
	class UV1MenuActionsDataAsset*                     m_menuActionsAsset;                                       // 0x06E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      m_subMenuClassOnSelect;                                   // 0x06F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_wantsToBeFocusedFirst;                                  // 0x06F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x06F9(0x0003) MISSED OFFSET
	struct FMargin                                     m_textMargin;                                             // 0x06FC(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x070C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    m_onClicked;                                              // 0x0710(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onPressed;                                              // 0x0720(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onReleased;                                             // 0x0730(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onHovered;                                              // 0x0740(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onUnhovered;                                            // 0x0750(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UV1ButtonSoundStyle*                         m_soundStyleAsset;                                        // 0x0760(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0768(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1Button");
		return ptr;
	}


	void SetTouchMethod(TEnumAsByte<EButtonTouchMethod>* InTouchMethod);
	void SetText(struct FText* Text);
	void SetStyle(struct FButtonStyle* InStyle);
	void SetClickMethod(TEnumAsByte<EButtonClickMethod>* InClickMethod);
	void SetBackgroundColor(struct FLinearColor* InBackgroundColor);
	bool IsPressed();
};


// Class V1CoreRuntime.V1ButtonSlot
// 0x0028 (0x0060 - 0x0038)
class UV1ButtonSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x004A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ButtonSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment);
	void SetPadding(struct FMargin* InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment);
};


// Class V1CoreRuntime.V1CanvasPanel
// 0x0000 (0x0130 - 0x0130)
class UV1CanvasPanel : public UCanvasPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1CanvasPanel");
		return ptr;
	}

};


// Class V1CoreRuntime.V1CharacterMovementComponent
// 0x0000 (0x0770 - 0x0770)
class UV1CharacterMovementComponent : public UCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1CharacterMovementComponent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ComboBoxString
// 0x0EB8 (0x0FC0 - 0x0108)
class UV1ComboBoxString : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0108(0x0050) MISSED OFFSET
	struct FV1MenuActions                              m_menuActions;                                            // 0x0158(0x0040) (Edit)
	class UV1MenuActionsDataAsset*                     m_menuActionsAsset;                                       // 0x0198(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             m_defaultOptions;                                         // 0x01A0(0x0010) (Edit, ZeroConstructor)
	struct FString                                     m_selectedOption;                                         // 0x01B0(0x0010) (Edit, ZeroConstructor)
	struct FV1ComboBoxStyle                            m_comboWidgetStyle;                                       // 0x01C0(0x03F8) (Edit, BlueprintVisible)
	struct FTableRowStyle                              m_itemStyle;                                              // 0x05B8(0x06B8) (Edit, BlueprintVisible)
	struct FTextBlockStyle                             m_fontStyle;                                              // 0x0C70(0x0268) (Edit, BlueprintVisible)
	class USlateWidgetStyleAsset*                      m_comboBoxWidgetStyleAsset;                               // 0x0ED8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_tableRowWidgetStyleAsset;                               // 0x0EE0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_fontWidgetStyleAsset;                                   // 0x0EE8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     m_contentPadding;                                         // 0x0EF0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              m_maxListHeight;                                          // 0x0F00(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_hasDownArrow;                                           // 0x0F04(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_enableGamepadNavigationMode;                            // 0x0F05(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0F06(0x0002) MISSED OFFSET
	struct FSlateColor                                 m_foregroundColor;                                        // 0x0F08(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               m_wantsToBeFocusedFirst;                                  // 0x0F30(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0F31(0x0003) MISSED OFFSET
	struct FScriptDelegate                             m_onGenerateWidgetEvent;                                  // 0x0F34(0x0014) (Edit, ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0F44(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    m_onSelectionChanged;                                     // 0x0F48(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onOpening;                                              // 0x0F58(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onHoverDelegate;                                        // 0x0F68(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onUnhoverDelegate;                                      // 0x0F78(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onPressDelegate;                                        // 0x0F88(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onReleaseDelegate;                                      // 0x0F98(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UV1ComboBoxSoundStyle*                       m_soundStyle;                                             // 0x0FA8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0FB0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ComboBoxString");
		return ptr;
	}


	void SetSelectedOption(struct FString* Option);
	bool RemoveOption(struct FString* Option);
	void RefreshOptions();
	struct FString GetSelectedOption();
	int GetOptionCount();
	struct FString GetOptionAtIndex(int* Index);
	int FindOptionIndex(struct FString* Option);
	void ClearSelection();
	void ClearOptions();
	void AddOption(struct FString* Option);
};


// Class V1CoreRuntime.V1ComboBoxStyleContainer
// 0x03F8 (0x0428 - 0x0030)
class UV1ComboBoxStyleContainer : public USlateWidgetStyleContainerBase
{
public:
	struct FV1ComboBoxStyle                            m_v1ComboBoxStyle;                                        // 0x0030(0x03F8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ComboBoxStyleContainer");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ContextAssignAction
// 0x0030 (0x0060 - 0x0030)
class UV1ContextAssignAction : public UV1ActionBase
{
public:
	class UV1ActionBase*                               m_action;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FV1ActionContext                            m_actionContext;                                          // 0x0038(0x0020) (Edit, BlueprintVisible)
	bool                                               m_assigned;                                               // 0x0058(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0059(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ContextAssignAction");
		return ptr;
	}


	void SetContext(struct FV1ActionContext* Context);
	struct FV1ActionContext GetContext();
};


// Class V1CoreRuntime.V1CoreStatics
// 0x0000 (0x0028 - 0x0028)
class UV1CoreStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1CoreStatics");
		return ptr;
	}


	class UMaterialInstanceDynamic* STATIC_ReplaceMaterialWithDynamicAtIndex(class UPrimitiveComponent** primitive, int* Index);
};


// Class V1CoreRuntime.V1DebugSnapshotSystem
// 0x0018 (0x0040 - 0x0028)
class UV1DebugSnapshotSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1DebugSnapshotSystem");
		return ptr;
	}

};


// Class V1CoreRuntime.V1DebugSnapshotActor
// 0x0000 (0x0390 - 0x0390)
class AV1DebugSnapshotActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1DebugSnapshotActor");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ElementMenu
// 0x0130 (0x0368 - 0x0238)
class UV1ElementMenu : public UV1UserWidget
{
public:
	class UNamedSlot*                                  m_menuContentSlot;                                        // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  m_subMenuSlot;                                            // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  m_tabSlot;                                                // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1TextBlock*                                m_toolTipText;                                            // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      m_toolTipImage;                                           // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  m_toolTipWidgetSlot;                                      // 0x0260(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1ToolTipContextWidget*                     m_toolTipContextWidget;                                   // 0x0268(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	EeV1ElementMenuTypes                               m_menuType;                                               // 0x0270(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EeV1MenuBackoutBehavior                            m_menuBackoutBehavior;                                    // 0x0271(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_autoActivate : 1;                                       // 0x0272(0x0001) (Edit)
	unsigned char                                      m_focusMenuIfEmpty : 1;                                   // 0x0272(0x0001) (Edit)
	unsigned char                                      m_autoVisibilityOnActivation : 1;                         // 0x0272(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0273(0x0005) MISSED OFFSET
	TArray<class UClass*>                              m_tabMenuClasses;                                         // 0x0278(0x0010) (Edit, ZeroConstructor)
	bool                                               m_allowTabs;                                              // 0x0288(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0289(0x0007) MISSED OFFSET
	TArray<struct FKey>                                m_activationKeysToIgnore;                                 // 0x0290(0x0010) (Edit, ZeroConstructor)
	TArray<struct FKey>                                m_customBackoutKeys;                                      // 0x02A0(0x0010) (Edit, ZeroConstructor)
	class UV1ElementMenuSoundStyle*                    m_soundStyle;                                             // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_openEvent;                                              // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               m_closeEvent;                                             // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpecialKeyMenuActivation>           m_specialActivationMenus;                                 // 0x02C8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      m_focusNonTabMenu : 1;                                    // 0x02D8(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02D9(0x0007) MISSED OFFSET
	TArray<struct FToolTipContext>                     m_customContext;                                          // 0x02E0(0x0010) (Edit, ZeroConstructor)
	class UV1ElementMenu*                              m_parentMenu;                                             // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UV1ElementMenu>               m_subMenu;                                                // 0x02F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      m_currentMenuItem;                                        // 0x0300(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class UWidget>                      m_bestMenuItemFocusCandidate;                             // 0x0308(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<TWeakObjectPtr<class UWidget>>              m_menuItems;                                              // 0x0310(0x0010) (ExportObject, ZeroConstructor, Transient)
	bool                                               m_isMenuActive;                                           // 0x0320(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UV1ElementMenu>               m_currentTabMenu;                                         // 0x0324(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x032C(0x0004) MISSED OFFSET
	TArray<class UClass*>                              m_tabMenus;                                               // 0x0330(0x0010) (ZeroConstructor, Transient)
	TWeakObjectPtr<class UUserWidget>                  m_toolTipWidget;                                          // 0x0340(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	int                                                m_currentTabIndex;                                        // 0x0348(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      m_muteInitalMenuSound : 1;                                // 0x034C(0x0001) (Transient)
	unsigned char                                      m_muteUISounds : 1;                                       // 0x034C(0x0001) (Transient)
	unsigned char                                      m_usingInputMode : 1;                                     // 0x034C(0x0001) (Transient)
	unsigned char                                      m_creatingSubMenu : 1;                                    // 0x034C(0x0001) (Transient)
	unsigned char                                      UnknownData05[0x1B];                                      // 0x034D(0x001B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ElementMenu");
		return ptr;
	}


	void SwitchTab(int* Index);
	void RebuildMenu();
	void OnMenuItemReleased_BP(class UWidget** menuItem);
	void OnMenuItemPressed_BP(class UWidget** menuItem);
	void OnMenuDeactivate_BP();
	void OnMenuActivate_BP();
	bool IsActive(bool* includeSubMenuCheck);
	void FocusMenuItem(class UWidget** itemToHighlight);
	void Deactivate(bool* destroy, bool* activateParent);
	class UV1ElementMenu* CreateSubMenu(class UClass** subMenuClass);
	void BackoutOfMenu();
	void Activate();
};


// Class V1CoreRuntime.V1EventCore
// 0x00B8 (0x00E0 - 0x0028)
class UV1EventCore : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1EventCore");
		return ptr;
	}

};


// Class V1CoreRuntime.V1EventCoreInterface
// 0x0000 (0x0028 - 0x0028)
class UV1EventCoreInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1EventCoreInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1EventSystem
// 0x0000 (0x0028 - 0x0028)
class UV1EventSystem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1EventSystem");
		return ptr;
	}


	void STATIC_SendTo(class UV1EventBase** evn, class UObject** Source, class AActor** Target);
	void STATIC_RemoveScriptResponder(class AActor** Target, class UClass** EventType, struct FScriptDelegate* scriptDelegate);
	void STATIC_Broadcast(class UObject** WorldContextObject, class UV1EventBase** evn, class UObject** Source);
	void STATIC_BindUnrealEventToV1EventForActor(class AActor** handlingActor, class UClass** EventType, struct FScriptDelegate* unrealDelegate);
	void STATIC_AddScriptResponder(class AActor** Target, class UClass** EventType, struct FScriptDelegate* scriptDelegate);
};


// Class V1CoreRuntime.V1ForceFeedbackEffect
// 0x0010 (0x0050 - 0x0040)
class UV1ForceFeedbackEffect : public UForceFeedbackEffect
{
public:
	TArray<struct FV1ForceFeedbackChannelDetails>      RumbleChannels;                                           // 0x0040(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ForceFeedbackEffect");
		return ptr;
	}

};


// Class V1CoreRuntime.V1GameplayAbility
// 0x0000 (0x03F8 - 0x03F8)
class UV1GameplayAbility : public UGameplayAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameplayAbility");
		return ptr;
	}

};


// Class V1CoreRuntime.V1GameplayEffectSpecObject
// 0x0148 (0x0170 - 0x0028)
class UV1GameplayEffectSpecObject : public UObject
{
public:
	struct FV1GameplayEffectSpec                       specification;                                            // 0x0028(0x0148) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameplayEffectSpecObject");
		return ptr;
	}

};


// Class V1CoreRuntime.V1GameplayEffect
// 0x01E8 (0x0310 - 0x0128)
class UV1GameplayEffect : public UActorComponent
{
public:
	struct FV1GameplayEffectSpec                       m_effectSpec;                                             // 0x0128(0x0148) (Edit)
	TArray<class UClass*>                              m_chainedGameplayEffectClasses;                           // 0x0270(0x0010) (Edit, ZeroConstructor)
	TArray<class UClass*>                              m_ownedGameplayEffectClasses;                             // 0x0280(0x0010) (Edit, ZeroConstructor)
	bool                                               m_secondaryEffectsUseThisEffectsDuration;                 // 0x0290(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0291(0x0003) MISSED OFFSET
	float                                              m_elapsedTime;                                            // 0x0294(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              m_duration;                                               // 0x0298(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isSuppressed;                                           // 0x029C(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isComplete;                                             // 0x029D(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_isFirstTick;                                            // 0x029E(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x029F(0x0001) MISSED OFFSET
	float                                              m_timeSinceLastTick;                                      // 0x02A0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	class UV1AttributesComponent*                      m_attributesComponent;                                    // 0x02A8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1GameplayEffectsComponent*                 m_gameplayEffectsComponent;                               // 0x02B0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	struct FV1AttributeInstigator                      m_attributeInstigator;                                    // 0x02B8(0x0018) (Net, Transient)
	TArray<TWeakObjectPtr<class UV1GameplayEffect>>    m_constructedOwnedEffectInstances;                        // 0x02D0(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    m_onEffectEnd;                                            // 0x02E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FVector_NetQuantize                         m_effectApplicationOrigin;                                // 0x02F0(0x000C) (Net, Transient)
	struct FVector_NetQuantize10                       m_effectApplicationDirection;                             // 0x02FC(0x000C) (Net, Transient)
	float                                              m_effectApplicationRadius;                                // 0x0308(0x0004) (Net, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x030C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameplayEffect");
		return ptr;
	}


	void RemoveEffect();
	void OnRep_Suppressed(bool* wasSuppressed);
	void OnRep_Duration();
};


// Class V1CoreRuntime.V1GameplayEffectsComponent
// 0x0110 (0x0238 - 0x0128)
class UV1GameplayEffectsComponent : public UActorComponent
{
public:
	class UV1AttributesComponent*                      m_attributesComponent;                                    // 0x0128(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TMap<struct FGameplayTag, int>                     m_activeEffectCategories;                                 // 0x0130(0x0050) (ZeroConstructor, Transient)
	TMap<struct FGameplayTag, int>                     m_activeEffectTags;                                       // 0x0180(0x0050) (ZeroConstructor, Transient)
	TArray<class UV1GameplayEffect*>                   m_activeGameplayEffects;                                  // 0x01D0(0x0010) (ExportObject, ZeroConstructor, Transient)
	TMap<class UV1GameplayEffect*, struct FGameplayEffectAttributeChanges> m_statusEffectAttributeChanges;                           // 0x01E0(0x0050) (ZeroConstructor, Transient)
	class UGameplayCategoryUpdatedEvent*               m_gameplayCategoryChangedEvent;                           // 0x0230(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameplayEffectsComponent");
		return ptr;
	}


	bool STATIC_S_HasGameplayEffectCategory(class AActor** onActor, struct FGameplayTag* gameplayEffectTypeCategory);
	bool STATIC_S_HasGameplayEffect(class AActor** onActor, struct FGameplayTag* gameplayEffectType);
	void RemoveGameplayEffects(struct FGameplayTag* typeTag);
	bool HasGameplayEffectCategory(struct FGameplayTag* gameplayEffectTypeCategory);
	bool HasGameplayEffect(struct FGameplayTag* gameplayEffectTypeTag);
	class UV1GameplayEffect* AddGenericGameplayEffect(struct FV1GameplayEffectSpec* specification, struct FV1AttributeInstigator* Instigator);
	class UV1GameplayEffect* AddGameplayEffect(class UClass** EffectClass, struct FV1AttributeInstigator* Instigator);
};


// Class V1CoreRuntime.V1GameplayEffectsInterface
// 0x0000 (0x0028 - 0x0028)
class UV1GameplayEffectsInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameplayEffectsInterface");
		return ptr;
	}


	class UV1GameplayEffectsComponent* GetGameplayEffectsComponent();
};


// Class V1CoreRuntime.V1GameplayTask
// 0x0038 (0x00A0 - 0x0068)
class UV1GameplayTask : public UGameplayTask
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0068(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameplayTask");
		return ptr;
	}


	void Multicast_OnResume();
	void Multicast_OnPause();
};


// Class V1CoreRuntime.V1GameplayTasksComponent
// 0x0000 (0x0198 - 0x0198)
class UV1GameplayTasksComponent : public UGameplayTasksComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameplayTasksComponent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1GameUserSettings
// 0x0008 (0x0120 - 0x0118)
class UV1GameUserSettings : public UGameUserSettings
{
public:
	bool                                               m_useAnalogCursor;                                        // 0x0118(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameUserSettings");
		return ptr;
	}

};


// Class V1CoreRuntime.V1GameVersionInterface
// 0x0000 (0x0028 - 0x0028)
class UV1GameVersionInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameVersionInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1GameViewportClient
// 0x0220 (0x0508 - 0x02E8)
class UV1GameViewportClient : public UGameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x02E8(0x0018) MISSED OFFSET
	bool                                               m_usingAnalogCursor;                                      // 0x0300(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0301(0x0017) MISSED OFFSET
	struct FVector2D                                   m_mousePosWhileActive;                                    // 0x0318(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector2D                                   m_mouseDelta;                                             // 0x0320(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<int, EeV1PlayerInputType>                     m_playerInputTypes;                                       // 0x0328(0x0050) (ZeroConstructor, Transient)
	bool                                               m_isVieportActive;                                        // 0x0378(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UWidget>                      m_lastFocusedMenuItem;                                    // 0x037C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0384(0x0004) MISSED OFFSET
	TArray<TWeakObjectPtr<class UV1ElementMenu>>       m_activeMenus;                                            // 0x0388(0x0010) (ExportObject, ZeroConstructor, Transient)
	unsigned char                                      m_usingGameplayInputMode : 1;                             // 0x0398(0x0001) (Transient)
	unsigned char                                      UnknownData04[0x117];                                     // 0x0399(0x0117) MISSED OFFSET
	bool                                               m_isAudioMuted;                                           // 0x04B0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x27];                                      // 0x04B1(0x0027) MISSED OFFSET
	bool                                               m_forcePCControls;                                        // 0x04D8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      m_forceUIGameplayInput : 1;                               // 0x04D9(0x0001) (Transient)
	unsigned char                                      m_forceFocusWidgetsOnInput : 1;                           // 0x04D9(0x0001) (Transient)
	unsigned char                                      m_ignoreAxisEvent : 1;                                    // 0x04D9(0x0001) (Transient)
	unsigned char                                      UnknownData06[0x6];                                       // 0x04DA(0x0006) MISSED OFFSET
	class UBroadcastInputKeyEvent*                     m_broadcastKeyEvent;                                      // 0x04E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x20];                                      // 0x04E8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GameViewportClient");
		return ptr;
	}


	bool IsForcePCControls();
	void ForcePCControls(bool* Value);
};


// Class V1CoreRuntime.V1GlyphDataAsset
// 0x00A0 (0x00D0 - 0x0030)
class UV1GlyphDataAsset : public UDataAsset
{
public:
	TMap<struct FKey, struct FV1Glyph>                 keyMaps;                                                  // 0x0030(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FKey, struct FV1GlyphAxis>             axisKeyMaps;                                              // 0x0080(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GlyphDataAsset");
		return ptr;
	}

};


// Class V1CoreRuntime.V1GlyphOverlay
// 0x0090 (0x01C0 - 0x0130)
class UV1GlyphOverlay : public UOverlay
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0130(0x0010) MISSED OFFSET
	class UV1GlyphDataAsset*                           m_glyphAsset;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_fontStyle;                                              // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_glyphOverlayStyle;                                      // 0x0150(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FV1GlyphOverlayStyle                        m_instanceGlyphStyle;                                     // 0x0158(0x0038) (Edit)
	struct FName                                       m_actionName;                                             // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0198(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GlyphOverlay");
		return ptr;
	}


	void OnGlyphImageLoaded();
	void OnGlyphImageFail(struct FKey* Key);
	void OnActionUnbound();
};


// Class V1CoreRuntime.V1GlyphStyleContainer
// 0x0038 (0x0068 - 0x0030)
class UV1GlyphStyleContainer : public USlateWidgetStyleContainerBase
{
public:
	struct FV1GlyphOverlayStyle                        m_glyphOverlayStyle;                                      // 0x0030(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GlyphStyleContainer");
		return ptr;
	}

};


// Class V1CoreRuntime.V1GlyphOverlayUserWidget
// 0x0050 (0x0280 - 0x0230)
class UV1GlyphOverlayUserWidget : public UUserWidget
{
public:
	class UV1TextBlock*                                m_textBlock;                                              // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1KeyGlyphImage*                            m_glyphImage;                                             // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1GlyphDataAsset*                           m_glyphAsset;                                             // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_textBlockStyle;                                         // 0x0248(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       m_actionName;                                             // 0x0250(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_axisValue;                                              // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x025C(0x0004) MISSED OFFSET
	struct FText                                       m_unboundText;                                            // 0x0260(0x0018) (Edit)
	float                                              m_axisDirection;                                          // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1GlyphOverlayUserWidget");
		return ptr;
	}


	void OnGlyphImageLoaded();
	void OnGlyphImageFail(struct FKey* Key);
	void OnActionUnbound();
};


// Class V1CoreRuntime.V1HorizontalBox
// 0x0010 (0x0130 - 0x0120)
class UV1HorizontalBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0120(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1HorizontalBox");
		return ptr;
	}


	class UV1HorizontalBoxSlot* AddChildToHorizontalBox(class UWidget** Content);
};


// Class V1CoreRuntime.V1HorizontalBoxSlot
// 0x0028 (0x0060 - 0x0038)
class UV1HorizontalBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FSlateChildSize                             Size;                                                     // 0x0048(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0052(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1HorizontalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment);
	void SetSize(struct FSlateChildSize* InSize);
	void SetPadding(struct FMargin* InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment);
};


// Class V1CoreRuntime.V1Image
// 0x0008 (0x0218 - 0x0210)
class UV1Image : public UImage
{
public:
	class USlateBrushAsset*                            m_brushAsset;                                             // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1Image");
		return ptr;
	}

};


// Class V1CoreRuntime.V1InputTypeWidget
// 0x0018 (0x0250 - 0x0238)
class UV1InputTypeWidget : public UV1UserWidget
{
public:
	class UNamedSlot*                                  m_mouseKeyboardSlot;                                      // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNamedSlot*                                  m_gamepadSlot;                                            // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1InputTypeWidget");
		return ptr;
	}

};


// Class V1CoreRuntime.V1MenuUserWidget
// 0x0138 (0x0368 - 0x0230)
class UV1MenuUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0230(0x0018) MISSED OFFSET
	TArray<struct FToolTipContext>                     m_toolTipContexts;                                        // 0x0248(0x0010) (Edit, ZeroConstructor)
	struct FV1MenuActions                              m_actions;                                                // 0x0258(0x0040) (Edit)
	class UV1MenuUserWidgetSoundStyle*                 m_soundStyle;                                             // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UV1MenuActionsDataAsset*                     m_menuActionsAsset;                                       // 0x02A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       m_menuToolTipText;                                        // 0x02A8(0x0018) (Edit, BlueprintVisible)
	bool                                               m_focusOnMouseHover;                                      // 0x02C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_wantsToBeFocusedFirst;                                  // 0x02C1(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02C2(0x0002) MISSED OFFSET
	float                                              m_longPressTime;                                          // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_useLongPress : 1;                                       // 0x02C8(0x0001) (Edit)
	unsigned char                                      m_updateCurrentMenuItem : 1;                              // 0x02C8(0x0001) (Edit)
	unsigned char                                      m_useOnlyCustomAccept : 1;                                // 0x02C8(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET
	class UClass*                                      m_longPressUserWidgetClass;                               // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                m_customAcceptKeys;                                       // 0x02D8(0x0010) (Edit, ZeroConstructor)
	class UNamedSlot*                                  m_longPressWidgetSlot;                                    // 0x02E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1LongPressUserWidget*                      m_longPressUserWidgetInstance;                            // 0x02F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      m_isPressed : 1;                                          // 0x02F8(0x0001) (Transient)
	bool                                               m_isUsingMouse;                                           // 0x02F9(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6E];                                      // 0x02FA(0x006E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1MenuUserWidget");
		return ptr;
	}


	void SetWantsToBeFocusedFirst(bool* wantsToBeFocusedFirst);
	void OnUnHoveredBP();
	void OnReleasedBP();
	void OnPressedBP();
	void OnHoveredBP();
	void OnFocusReceivedBP();
	void OnFocusLostBP();
};


// Class V1CoreRuntime.V1KeyBindingUserWidget
// 0x00C8 (0x0430 - 0x0368)
class UV1KeyBindingUserWidget : public UV1MenuUserWidget
{
public:
	class UV1TextBlock*                                m_textBlock;                                              // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FText                                       m_selectingText;                                          // 0x0370(0x0018) (Edit)
	struct FText                                       m_noSelectionText;                                        // 0x0388(0x0018) (Edit)
	unsigned char                                      m_allowGamepadKeys : 1;                                   // 0x03A0(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A1(0x0007) MISSED OFFSET
	TArray<struct FKey>                                m_nullOutKeys;                                            // 0x03A8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FKey>                                m_esacpeKeys;                                             // 0x03B8(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      m_isSelecting;                                            // 0x03C8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x67];                                      // 0x03C9(0x0067) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1KeyBindingUserWidget");
		return ptr;
	}

};


// Class V1CoreRuntime.V1KeyGlyphImage
// 0x0060 (0x0270 - 0x0210)
class UV1KeyGlyphImage : public UImage
{
public:
	class UV1GlyphDataAsset*                           m_glyphAsset;                                             // 0x0210(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_imageMatchSize;                                         // 0x0218(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0219(0x0003) MISSED OFFSET
	struct FName                                       m_actionName;                                             // 0x021C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_axisValue;                                              // 0x0224(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EeV1GlyphPlatform                                  m_previewPlatform;                                        // 0x0228(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    m_failedToLoadImage;                                      // 0x0230(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onImageLoaded;                                          // 0x0240(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0250(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1KeyGlyphImage");
		return ptr;
	}


	void UpdateImage();
};


// Class V1CoreRuntime.V1ListInterface
// 0x0000 (0x0028 - 0x0028)
class UV1ListInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ListInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ListItemInterface
// 0x0000 (0x0028 - 0x0028)
class UV1ListItemInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ListItemInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ListItemUserWidget
// 0x0010 (0x0378 - 0x0368)
class UV1ListItemUserWidget : public UV1MenuUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0368(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ListItemUserWidget");
		return ptr;
	}

};


// Class V1CoreRuntime.V1LongPressUserWidget
// 0x0040 (0x0270 - 0x0230)
class UV1LongPressUserWidget : public UUserWidget
{
public:
	float                                              m_currentPressTime;                                       // 0x0230(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      m_isBeingPressed : 1;                                     // 0x0234(0x0001) (Transient)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0235(0x0003) MISSED OFFSET
	float                                              m_endPressTime;                                           // 0x0238(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x34];                                      // 0x023C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1LongPressUserWidget");
		return ptr;
	}


	void OnStartLongPressBP();
	void OnProgressUpdatedBP(float* percent);
};


// Class V1CoreRuntime.V1MenuActionsDataAsset
// 0x0040 (0x0070 - 0x0030)
class UV1MenuActionsDataAsset : public UDataAsset
{
public:
	struct FV1MenuActions                              actions;                                                  // 0x0030(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1MenuActionsDataAsset");
		return ptr;
	}

};


// Class V1CoreRuntime.V1MenuInterface
// 0x0000 (0x0028 - 0x0028)
class UV1MenuInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1MenuInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1MenuToolTipInterface
// 0x0000 (0x0028 - 0x0028)
class UV1MenuToolTipInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1MenuToolTipInterface");
		return ptr;
	}

};


// Class V1CoreRuntime.V1MultiVoiceAudioComponent
// 0x0020 (0x04F0 - 0x04D0)
class UV1MultiVoiceAudioComponent : public UV1AudioComponent
{
public:
	struct FMultiVoiceContainer                        m_voicePool;                                              // 0x04D0(0x0018) (Transient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1MultiVoiceAudioComponent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1OptionsButton
// 0x0698 (0x07B8 - 0x0120)
class UV1OptionsButton : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0120(0x0018) MISSED OFFSET
	unsigned char                                      m_wantToBeFocusedFirst : 1;                               // 0x0138(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0139(0x0007) MISSED OFFSET
	class USlateWidgetStyleAsset*                      m_widgetStyle;                                            // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_fontWidgetStyle;                                        // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FV1OptionsStyle                             m_instanceWidgetStyle;                                    // 0x0150(0x0390) (Edit, BlueprintVisible)
	class UV1OptionsButtonSoundStyle*                  m_soundStyle;                                             // 0x04E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FText                                       m_menuToolTipText;                                        // 0x04E8(0x0018) (Edit, BlueprintVisible)
	class UTexture2D*                                  m_toolTipTexture;                                         // 0x0500(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FToolTipContext>                     m_toolTipContexts;                                        // 0x0508(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      m_toolTipWidget;                                          // 0x0518(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_useToolTipText : 1;                                     // 0x0520(0x0001) (Edit)
	unsigned char                                      m_muteSound : 1;                                          // 0x0520(0x0001) (Transient)
	unsigned char                                      UnknownData02[0x297];                                     // 0x0521(0x0297) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1OptionsButton");
		return ptr;
	}


	void OnUnhoverd();
	void OnInputChange(class APlayerController** PlayerController, EeV1PlayerInputType* inputType);
	void OnHovered();
};


// Class V1CoreRuntime.V1OptionsStyleContainer
// 0x0390 (0x03C0 - 0x0030)
class UV1OptionsStyleContainer : public USlateWidgetStyleContainerBase
{
public:
	struct FV1OptionsStyle                             m_optionsStyle;                                           // 0x0030(0x0390) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1OptionsStyleContainer");
		return ptr;
	}

};


// Class V1CoreRuntime.V1OverlapComponent
// 0x0160 (0x03F0 - 0x0290)
class UV1OverlapComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0290(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    m_onOverlapEndDynamic;                                    // 0x0298(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              m_delayBetweenTests;                                      // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_isSynchronous : 1;                                      // 0x02AC(0x0001) (Edit)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02AD(0x0003) MISSED OFFSET
	float                                              m_inFirstDelay;                                           // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_evaluationRandomDeviation;                              // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              m_filteredClasses;                                        // 0x02B8(0x0010) (Edit, ZeroConstructor)
	struct FName                                       m_customCollisionProfileName;                             // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_usesPhysx;                                              // 0x02D0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02D1(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UPrimitiveComponent>          m_parentPrimitive;                                        // 0x02D4(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class USceneComponent>              m_parentSceneComponent;                                   // 0x02DC(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	bool                                               m_useSimpleRadius;                                        // 0x02E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	float                                              m_simpleRadius;                                           // 0x02E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x104];                                     // 0x02EC(0x0104) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1OverlapComponent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ParticleSystemComponent
// 0x0040 (0x0840 - 0x0800)
class UV1ParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0800(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ParticleSystemComponent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1PathFollowingComponent
// 0x0048 (0x0358 - 0x0310)
class UV1PathFollowingComponent : public UCrowdFollowingComponent
{
public:
	class UV1AIMovementLogic*                          m_activeMovementLogic;                                    // 0x0310(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UV1AIMovementProfile*                        m_movementProfile;                                        // 0x0318(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_currentPathFollowingSpeed;                              // 0x0320(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0324(0x0004) MISSED OFFSET
	class UV1AttributeMod*                             m_maxSpeedMod;                                            // 0x0328(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UV1Attribute*                                m_maxSpeedAttribute;                                      // 0x0330(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0338(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1PathFollowingComponent");
		return ptr;
	}

};


// Class V1CoreRuntime.V1PlayerController
// 0x0008 (0x06E0 - 0x06D8)
class AV1PlayerController : public APlayerController
{
public:
	class APawn*                                       m_cachedPawnForInitialization;                            // 0x06D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1PlayerController");
		return ptr;
	}


	EeV1PlayerInputType GetCurrentPlayerInputType();
};


// Class V1CoreRuntime.V1PlayerInput
// 0x0000 (0x03A8 - 0x03A8)
class UV1PlayerInput : public UPlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1PlayerInput");
		return ptr;
	}

};


// Class V1CoreRuntime.V1RefocusUserWidget
// 0x0018 (0x0380 - 0x0368)
class UV1RefocusUserWidget : public UV1MenuUserWidget
{
public:
	class UWidget*                                     m_widgetToFocus;                                          // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       m_nameOfWidgetToFocus;                                    // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_focusWidgetByName : 1;                                  // 0x0378(0x0001) (Edit)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0379(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1RefocusUserWidget");
		return ptr;
	}


	void SetWidgetToFocus(class UWidget** WidgetToFocus);
};


// Class V1CoreRuntime.V1ScreenMenuActor
// 0x0020 (0x03B0 - 0x0390)
class AV1ScreenMenuActor : public AActor
{
public:
	class UClass*                                      m_elementMenuClass;                                       // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UV1ElementMenu*                              m_elementMenu;                                            // 0x0398(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class APlayerController*                           m_owningPlayer;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	bool                                               m_autoActivate;                                           // 0x03A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ScreenMenuActor");
		return ptr;
	}


	class AV1ScreenMenuActor* STATIC_SpawnElementMenu(class UWorld** World, class UClass** menuClass, class AV1PlayerController** m_owningPlayer);
	bool IsElementMenuActive();
	void DeactivateElementMenu();
	void ActivateElementMenu();
};


// Class V1CoreRuntime.V1ScrollBox
// 0x0748 (0x0868 - 0x0120)
class UV1ScrollBox : public UPanelWidget
{
public:
	struct FScrollBoxStyle                             WidgetStyle;                                              // 0x0120(0x0228) (Edit, BlueprintVisible)
	struct FScrollBarStyle                             WidgetBarStyle;                                           // 0x0348(0x04D0) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0818(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   ScrollBarVisibility;                                      // 0x0819(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EConsumeMouseWheel                                 ConsumeMouseWheel;                                        // 0x081A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x081B(0x0001) MISSED OFFSET
	struct FVector2D                                   ScrollbarThickness;                                       // 0x081C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AlwaysShowScrollbar;                                      // 0x0824(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AllowOverscroll;                                          // 0x0825(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               OnlyV1HorizontalBox;                                      // 0x0826(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EV1DescendantScrollDestination                     NavigationDestination;                                    // 0x0827(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              NavigationScrollPadding;                                  // 0x0828(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowRightClickDragScrolling;                            // 0x082C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x082D(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUserScrolled;                                           // 0x0830(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class USlateWidgetStyleAsset*                      m_scrollBoxStyle;                                         // 0x0840(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_barStyle;                                               // 0x0848(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x0850(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ScrollBox");
		return ptr;
	}


	void SetScrollOffset(float* NewScrollOffset);
	void SetScrollBarVisibility(ESlateVisibility* NewScrollBarVisibility);
	void SetScrollbarThickness(struct FVector2D* NewScrollbarThickness);
	void SetOrientation(TEnumAsByte<EOrientation>* NewOrientation);
	void SetAlwaysShowScrollbar(bool* NewAlwaysShowScrollbar);
	void SetAllowOverscroll(bool* NewAllowOverscroll);
	void ScrollWidgetIntoView(class UWidget** WidgetToFind, bool* AnimateScroll, EV1DescendantScrollDestination* ScrollDestination);
	void ScrollToStart();
	void ScrollToEnd();
	float GetViewOffsetFraction();
	float GetScrollOffset();
};


// Class V1CoreRuntime.V1ScrollBoxSlot
// 0x0020 (0x0058 - 0x0038)
class UV1ScrollBoxSlot : public UPanelSlot
{
public:
	struct FMargin                                     Padding;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  HorizontalAlignment;                                      // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    VerticalAlignment;                                        // 0x0049(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x004A(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ScrollBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment>* InVerticalAlignment);
	void SetPadding(struct FMargin* InPadding);
	void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment>* InHorizontalAlignment);
};


// Class V1CoreRuntime.V1Slider
// 0x04D0 (0x05D8 - 0x0108)
class UV1Slider : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0108(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnMouseCaptureBegin;                                      // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnMouseCaptureEnd;                                        // 0x0128(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureBegin;                                 // 0x0138(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnControllerCaptureEnd;                                   // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnValueChanged;                                           // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0168(0x0010) MISSED OFFSET
	bool                                               m_wantsToBeFocusedFirst;                                  // 0x0178(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0179(0x0003) MISSED OFFSET
	float                                              m_value;                                                  // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             m_valueDelegate;                                          // 0x0180(0x0014) (ZeroConstructor, InstancedReference)
	class UV1SliderSoundStyle*                         m_soundStyle;                                             // 0x0190(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSliderStyle                                m_sliderWidgetInstanceStyle;                              // 0x0198(0x0340) (Edit, BlueprintVisible)
	TEnumAsByte<EOrientation>                          m_orientation;                                            // 0x04D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class USlateWidgetStyleAsset*                      m_sliderWidgetStyle;                                      // 0x04E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                m_sliderBarColor;                                         // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                m_sliderHandleColor;                                      // 0x04F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_indentHandle;                                           // 0x0508(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_locked;                                                 // 0x0509(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x050A(0x0002) MISSED OFFSET
	float                                              m_stepSize;                                               // 0x050C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              m_accelerationValue;                                      // 0x0510(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              m_maxStepSize;                                            // 0x0514(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                m_repeatsTillAcceleration;                                // 0x0518(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_isFocusable;                                            // 0x051C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x051D(0x0003) MISSED OFFSET
	struct FText                                       m_menuToolTipText;                                        // 0x0520(0x0018) (Edit, BlueprintVisible)
	class UV1MenuActionsDataAsset*                     m_menuActionsAsset;                                       // 0x0538(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FV1MenuActions                              m_sliderActions;                                          // 0x0540(0x0040) (Edit)
	unsigned char                                      m_useToolTipText : 1;                                     // 0x0580(0x0001) (Edit)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0581(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    m_onHoverEvent;                                           // 0x0588(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onUnhoverEvent;                                         // 0x0598(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onPressedEvent;                                         // 0x05A8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onReleasedEvent;                                        // 0x05B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	float                                              m_lastValueSelected;                                      // 0x05C8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      m_hasPlayedErrorSound : 1;                                // 0x05CC(0x0001) (Transient)
	unsigned char                                      UnknownData07[0xB];                                       // 0x05CD(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1Slider");
		return ptr;
	}


	void SetValue(float* InValue);
	void SetStepSize(float* InValue);
	void SetSliderHandleColor(struct FLinearColor* InValue);
	void SetSliderBarColor(struct FLinearColor* InValue);
	void SetLocked(bool* InValue);
	void SetIndentHandle(bool* InValue);
	float GetValue();
};


// Class V1CoreRuntime.V1ButtonSoundStyle
// 0x0038 (0x0068 - 0x0030)
class UV1ButtonSoundStyle : public UDataAsset
{
public:
	struct FButtonSoundStyle                           ButtonSoundStyle;                                         // 0x0030(0x0038) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ButtonSoundStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ToggleButtonSoundStyle
// 0x0028 (0x0058 - 0x0030)
class UV1ToggleButtonSoundStyle : public UDataAsset
{
public:
	struct FToggleButtonSoundStyle                     ToggleButtonSoundStyle;                                   // 0x0030(0x0028) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ToggleButtonSoundStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1SliderSoundStyle
// 0x0020 (0x0050 - 0x0030)
class UV1SliderSoundStyle : public UDataAsset
{
public:
	struct FSliderSoundStyle                           SliderSoundStyle;                                         // 0x0030(0x0020) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1SliderSoundStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ComboBoxSoundStyle
// 0x0040 (0x0070 - 0x0030)
class UV1ComboBoxSoundStyle : public UDataAsset
{
public:
	struct FComboBoxSoundStyle                         ComboBoxSoundStyle;                                       // 0x0030(0x0040) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ComboBoxSoundStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ElementMenuSoundStyle
// 0x0018 (0x0048 - 0x0030)
class UV1ElementMenuSoundStyle : public UDataAsset
{
public:
	struct FElementMenuSoundStyle                      ElementMenuSoundStyle;                                    // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ElementMenuSoundStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1OptionsButtonSoundStyle
// 0x0018 (0x0048 - 0x0030)
class UV1OptionsButtonSoundStyle : public UDataAsset
{
public:
	struct FOptionButtonSoundStyle                     optionsButtonSoundStyle;                                  // 0x0030(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1OptionsButtonSoundStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1MenuUserWidgetSoundStyle
// 0x0050 (0x0080 - 0x0030)
class UV1MenuUserWidgetSoundStyle : public UDataAsset
{
public:
	struct FMenuUserWidgetSoundStyle                   MenuUserWidgetSoundStyle;                                 // 0x0030(0x0050) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1MenuUserWidgetSoundStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1StatusAttribute
// 0x0038 (0x0078 - 0x0040)
class UV1StatusAttribute : public UV1AttributeBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	bool                                               m_statusEnabled;                                          // 0x0058(0x0001) (Edit, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	struct FV1StatusAttributeStack                     m_attributeStack;                                         // 0x0060(0x0018) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1StatusAttribute");
		return ptr;
	}


	void OnRep_StatusEnabled();
	bool GetStatus();
};


// Class V1CoreRuntime.V1SublevelWideCollisionMaskSetter
// 0x0008 (0x0398 - 0x0390)
class AV1SublevelWideCollisionMaskSetter : public AActor
{
public:
	unsigned char                                      m_collisionMask;                                          // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0391(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1SublevelWideCollisionMaskSetter");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ToggleButton
// 0x0690 (0x07B0 - 0x0120)
class UV1ToggleButton : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0120(0x0020) MISSED OFFSET
	class UV1ToggleButtonSoundStyle*                   m_soundStyle;                                             // 0x0140(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USlateWidgetStyleAsset*                      m_toggleButtonStyle;                                      // 0x0148(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_wantsToBeFocusedFirst;                                  // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    m_onHoverDelegate;                                        // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_onUnhoverDelegate;                                      // 0x0168(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_OnPressedDelegate;                                      // 0x0178(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    m_OnReleasedDelegate;                                     // 0x0188(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FV1MenuActions                              m_menuActions;                                            // 0x0198(0x0040) (Edit)
	ECheckBoxState                                     CheckedState;                                             // 0x01D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnCheckStateChanged;                                      // 0x01E0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptDelegate                             CheckedStateDelegate;                                     // 0x01F0(0x0014) (ZeroConstructor, InstancedReference)
	class UV1MenuActionsDataAsset*                     m_menuActionsAsset;                                       // 0x0200(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FCheckBoxStyle                              m_widgetStyle;                                            // 0x0208(0x0580) (Edit, BlueprintVisible)
	TEnumAsByte<EHorizontalAlignment>                  m_horizontalAlignment;                                    // 0x0788(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_isFocusable;                                            // 0x0789(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x078A(0x0006) MISSED OFFSET
	struct FText                                       m_menuToolTipText;                                        // 0x0790(0x0018) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData04[0x8];                                       // 0x07A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ToggleButton");
		return ptr;
	}


	void SetIsChecked(bool* InIsChecked);
	void SetCheckedState(ECheckBoxState* InCheckedState);
	bool IsPressed();
	bool IsChecked();
	ECheckBoxState GetCheckedState();
};


// Class V1CoreRuntime.V1TabButton
// 0x0010 (0x07C0 - 0x07B0)
class UV1TabButton : public UV1ToggleButton
{
public:
	int                                                m_tabIndex;                                               // 0x07B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x07B4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1TabButton");
		return ptr;
	}


	void OnMenuTabSwitch(int* Index);
};


// Class V1CoreRuntime.V1TableRowStyle
// 0x06B8 (0x06E8 - 0x0030)
class UV1TableRowStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTableRowStyle                              m_tableRowStyle;                                          // 0x0030(0x06B8) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1TableRowStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1TextBlock
// 0x0290 (0x03B8 - 0x0128)
class UV1TextBlock : public UTextLayoutWidget
{
public:
	class USlateWidgetStyleAsset*                      m_fontWidgetStyle;                                        // 0x0128(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FV1TextBlockWidgetStyle                     m_instanceFontWidgetStyle;                                // 0x0130(0x0240) (Edit)
	struct FText                                       m_text;                                                   // 0x0370(0x0018) (Edit)
	EeV1TextCase                                       m_caseOption;                                             // 0x0388(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	struct FScriptDelegate                             m_textDelegate;                                           // 0x038C(0x0014) (ZeroConstructor, InstancedReference)
	float                                              m_minDesiredWidth;                                        // 0x039C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_useWrapWithInvalidationPanel;                           // 0x03A0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               m_useAutoWrapText;                                        // 0x03A1(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x16];                                      // 0x03A2(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1TextBlock");
		return ptr;
	}


	void SetText(struct FText* InText);
	void SetShadowOffset(struct FVector2D* InShadowOffset);
	void SetShadowColorAndOpacity(struct FLinearColor* InShadowColorAndOpacity);
	void SetOpacity(float* InOpacity);
	void SetMinDesiredWidth(float* InMinDesiredWidth);
	void SetJustification(TEnumAsByte<ETextJustify>* InJustification);
	void SetFont(struct FSlateFontInfo* InFontInfo);
	void SetColorAndOpacity(struct FSlateColor* InColorAndOpacity);
	void SetAutoWrapText(bool* InAutoTextWrap);
	struct FText GetText();
	class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	class UMaterialInstanceDynamic* GetDynamicFontMaterial();
};


// Class V1CoreRuntime.V1TextBlockStyle
// 0x0240 (0x0270 - 0x0030)
class UV1TextBlockStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FV1TextBlockWidgetStyle                     m_textBlockStyle;                                         // 0x0030(0x0240) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1TextBlockStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.UMGTextBlockStyle
// 0x0268 (0x0298 - 0x0030)
class UUMGTextBlockStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                             m_textBlockStyle;                                         // 0x0030(0x0268) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.UMGTextBlockStyle");
		return ptr;
	}

};


// Class V1CoreRuntime.V1TileScrollBoxUserWidget
// 0x0080 (0x0400 - 0x0380)
class UV1TileScrollBoxUserWidget : public UV1RefocusUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0380(0x0008) MISSED OFFSET
	class UV1ScrollBox*                                m_scrollBox;                                              // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	ESlateVisibility                                   m_scrollboxVisibility;                                    // 0x0390(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0391(0x0003) MISSED OFFSET
	int                                                m_columnSize;                                             // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	EeTileFocusWidgetType                              m_focusType;                                              // 0x0398(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_childWantsToBeFocusedFirst : 1;                         // 0x0399(0x0001) (Edit)
	unsigned char                                      UnknownData02[0x2];                                       // 0x039A(0x0002) MISSED OFFSET
	struct FMargin                                     m_padding;                                                // 0x039C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    m_divderVerticalAlignment;                                // 0x03AC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  m_divderHorizontalAlignment;                              // 0x03AD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVerticalAlignment>                    m_childVerticalAlignment;                                 // 0x03AE(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHorizontalAlignment>                  m_childHorizontalAlignment;                               // 0x03AF(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      m_scrollWidgetIntoView : 1;                               // 0x03B0(0x0001) (Edit)
	unsigned char                                      m_dividerIsFirstChild : 1;                                // 0x03B0(0x0001) (Transient)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                m_currentHorizontalChildIndex;                            // 0x03B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x48];                                      // 0x03B8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1TileScrollBoxUserWidget");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ToolTipContextButtonWidget
// 0x0060 (0x03C8 - 0x0368)
class UV1ToolTipContextButtonWidget : public UV1MenuUserWidget
{
public:
	class UV1GlyphOverlayUserWidget*                   m_glyphOverlayWidget;                                     // 0x0368(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UV1TextBlock*                                m_contextDescriptionText;                                 // 0x0370(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      m_hoverImage;                                             // 0x0378(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FLinearColor                                m_hoveredColor;                                           // 0x0380(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                m_unHoveredColor;                                         // 0x0390(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	struct FToolTipContext                             m_context;                                                // 0x03A0(0x0028) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ToolTipContextButtonWidget");
		return ptr;
	}

};


// Class V1CoreRuntime.V1ToolTipContextWidget
// 0x0010 (0x0248 - 0x0238)
class UV1ToolTipContextWidget : public UV1UserWidget
{
public:
	class UHorizontalBox*                              m_hzBox;                                                  // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      m_contextButtonClass;                                     // 0x0240(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1ToolTipContextWidget");
		return ptr;
	}

};


// Class V1CoreRuntime.V1TriggerVolume
// 0x0038 (0x0400 - 0x03C8)
class AV1TriggerVolume : public ATriggerVolume
{
public:
	struct FScriptMulticastDelegate                    OnBeginTriggerDelegate;                                   // 0x03C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnEndTriggerDelegate;                                     // 0x03D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UV1OverlapComponent*                         m_v1OverlapComponent;                                     // 0x03E8(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x03F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1TriggerVolume");
		return ptr;
	}


	void OnEndTriggerOverlap__DelegateSignature(struct FHitResult* HitResult);
	void OnBeginTriggerOverlap__DelegateSignature(struct FHitResult* HitResult);
	class UV1OverlapComponent* GetV1OverlapComponent();
};


// Class V1CoreRuntime.VisualLoggerSnapshotEvent
// 0x0008 (0x0040 - 0x0038)
class UVisualLoggerSnapshotEvent : public UV1EventBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.VisualLoggerSnapshotEvent");
		return ptr;
	}

};


// Class V1CoreRuntime.WaitAction
// 0x0000 (0x0038 - 0x0038)
class UWaitAction : public UV1IntervalAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.WaitAction");
		return ptr;
	}

};


// Class V1CoreRuntime.V1AbilityTask
// 0x0008 (0x0088 - 0x0080)
class UV1AbilityTask : public UAbilityTask
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class V1CoreRuntime.V1AbilityTask");
		return ptr;
	}


	void Multicast_OnResume();
	void Multicast_OnPause();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
