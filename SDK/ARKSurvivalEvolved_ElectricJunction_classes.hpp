#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricJunction_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElectricJunction.ElectricJunction_C
// 0x0008 (0x0DC0 - 0x0DB8)
class AElectricJunction_C : public AStructureItemContainerBaseBP_C
{
public:
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectricJunction.ElectricJunction_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElectricJunction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
