#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ramp_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ramp_Tek.Ramp_Tek_C
// 0x0008 (0x0AF0 - 0x0AE8)
class ARamp_Tek_C : public ARamp_Base_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ramp_Tek.Ramp_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ramp_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
