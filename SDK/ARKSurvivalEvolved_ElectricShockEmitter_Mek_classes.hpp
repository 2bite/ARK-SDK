#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricShockEmitter_Mek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C
// 0x0000 (0x0518 - 0x0518)
class AElectricShockEmitter_Mek_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectricShockEmitter_Mek.ElectricShockEmitter_Mek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElectricShockEmitter_Mek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
