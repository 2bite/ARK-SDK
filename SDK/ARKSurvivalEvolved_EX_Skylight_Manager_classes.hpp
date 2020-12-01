#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Skylight_Manager_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_Skylight_Manager.EX_Skylight_Manager_C
// 0x0034 (0x04DC - 0x04A8)
class AEX_Skylight_Manager_C : public ABP_Emitter_Master_C
{
public:
	class ASkyLight*                                   SkyLight;                                                 // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               InBiome;                                                  // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04B1(0x0003) MISSED OFFSET
	float                                              DomeIntensity;                                            // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WastelandIntesity;                                        // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              INT_Wasteland;                                            // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSM5;                                                    // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x04C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x04C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EBiomeType_Enum>                       K2Node_CustomEvent_Biome;                                 // 0x04C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x04C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04C5(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x04C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x04CC(0x0014) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_Skylight_Manager.EX_Skylight_Manager_C");
		return ptr;
	}


	void UserConstructionScript();
	void UpdateSkylight();
	void ReceiveBeginPlay();
	void BiomeSwitch(TEnumAsByte<EBiomeType_Enum> Biome);
	void ExecuteUbergraph_EX_Skylight_Manager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif