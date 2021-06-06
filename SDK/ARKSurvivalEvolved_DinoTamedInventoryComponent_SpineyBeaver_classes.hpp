#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_SpineyBeaver_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_SpineyBeaver.DinoTamedInventoryComponent_SpineyBeaver_C
// 0x0000 (0x0590 - 0x0590)
class UDinoTamedInventoryComponent_SpineyBeaver_C : public UDinoTamedInventoryComponent_SmithyCapable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_SpineyBeaver.DinoTamedInventoryComponent_SpineyBeaver_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_SpineyBeaver(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
