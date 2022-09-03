#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoisonTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PoisonTrap.Buff_PoisonTrap_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_PoisonTrap_C : public ABuff_Base_GasMaskable_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PoisonTrap.Buff_PoisonTrap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PoisonTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
