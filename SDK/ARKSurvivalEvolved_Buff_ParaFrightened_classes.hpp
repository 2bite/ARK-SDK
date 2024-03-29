#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ParaFrightened_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ParaFrightened.Buff_ParaFrightened_C
// 0x0008 (0x09A8 - 0x09A0)
class ABuff_ParaFrightened_C : public ABuff_ForceFlee_Base_C
{
public:
	class AActor*                                      RunAwayFrom_1;                                            // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ParaFrightened.Buff_ParaFrightened_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ParaFrightened(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
