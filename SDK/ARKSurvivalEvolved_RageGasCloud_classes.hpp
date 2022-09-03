#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RageGasCloud_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RageGasCloud.RageGasCloud_C
// 0x0000 (0x0978 - 0x0978)
class ARageGasCloud_C : public ABuff_PoisonTrap_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RageGasCloud.RageGasCloud_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RageGasCloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
