#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ElementalDisturbance_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ElementalDisturbance.BP_ElementalDisturbance_C
// 0x0190 (0x0650 - 0x04C0)
class ABP_ElementalDisturbance_C : public ABP_Emitter_Master_C
{
public:
	class UChildActorComponent*                        AudioSource2;                                             // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPointLightComponent*                        EffectLight;                                              // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        AudioSource;                                              // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDrawSphereComponent*                        DrawSphere1;                                              // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class AActor*>                              InfluencedMeshes;                                         // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	bool                                               Recalculate;                                              // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04F1(0x0003) MISSED OFFSET
	float                                              MeshGatherDistance;                                       // 0x04F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    TekRippleMIC;                                             // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              EnablingActorClasses;                                     // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                numEnablers;                                              // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MyLocation;                                               // 0x0514(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                MainEmissiveColor;                                        // 0x0520(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SecondsPerTick;                                           // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaveMainEmissiveIntensity;                                // 0x0534(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              lightIntensity;                                           // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LightRadiusOffset;                                        // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WPO_Control;                                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HueShift;                                                 // 0x0544(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseEnablingClass;                                        // 0x0548(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseLight;                                                // 0x0549(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x054A(0x0002) MISSED OFFSET
	float                                              SolidHexFadeOutBlendRange;                                // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SolidHexFadeOutOffset;                                    // 0x0550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              EffectFadeOutOffset;                                      // 0x0554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ripple_Spacial_Frequency;                                 // 0x0558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Ripple2_Spacial_Frequency;                                // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              IridescenceInfluence;                                     // 0x0560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldAxisControl;                                         // 0x0564(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RippleScale;                                              // 0x0570(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              ignoredActors;                                            // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class UMaterialInstanceDynamic*                    LightFunction_MIC;                                        // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EffectFadeOutBlendRange;                                  // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               EnabledOnLowQuality;                                      // 0x059C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x059D(0x0003) MISSED OFFSET
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x05A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x05A4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Conv_IntToBool_ReturnValue;                      // 0x05A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x05A9(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x05AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_Array_Get_Item;                                  // 0x05B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x05B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty;// 0x05C0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_OutActors;             // 0x05D0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_SphereOverlapActorsSimple_ReturnValue;           // 0x05E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x05E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x05E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x05E9(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x05EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x05F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x05F1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x05F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x05F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x05FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AAmbientSound*                               K2Node_DynamicCast_AsAmbientSound;                        // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	class AAmbientSound*                               K2Node_DynamicCast_AsAmbientSound2;                       // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0618(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x0620(0x0030) (Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalDisturbance.BP_ElementalDisturbance_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void checkEnablers();
	void ExecuteUbergraph_BP_ElementalDisturbance(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
