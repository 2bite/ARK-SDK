#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeRamp_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeRamp_BP.SM_AdobeRamp_BP_C
// 0x0008 (0x0AC8 - 0x0AC0)
class ASM_AdobeRamp_BP_C : public ARamp_Metal_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeRamp_BP.SM_AdobeRamp_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeRamp_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
