#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MortarAndPestle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MortarAndPestle.MortarAndPestle_C
// 0x0008 (0x0E18 - 0x0E10)
class AMortarAndPestle_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_MortarAndPestle_C*        PrimalInventoryBP_MortarAndPestle_C1;                     // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MortarAndPestle.MortarAndPestle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MortarAndPestle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
