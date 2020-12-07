#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Beam_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Beam_Tek.Beam_Tek_C
// 0x0008 (0x0AC8 - 0x0AC0)
class ABeam_Tek_C : public ABeam_Base_SM_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Beam_Tek.Beam_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Beam_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
