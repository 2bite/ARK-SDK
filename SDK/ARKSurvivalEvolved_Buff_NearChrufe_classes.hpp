#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NearChrufe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NearChrufe.Buff_NearChrufe_C
// 0x0004 (0x0964 - 0x0960)
class ABuff_NearChrufe_C : public ABuff_Base_C
{
public:
	int                                                HeatLevel;                                                // 0x0960(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NearChrufe.Buff_NearChrufe_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void BuffTickClient(float* DeltaTime);
	void Update_Heat_Level(int Increased_Heat_level);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NearChrufe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
