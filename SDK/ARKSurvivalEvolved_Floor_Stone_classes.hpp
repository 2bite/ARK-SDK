#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Floor_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Floor_Stone.Floor_Stone_C
// 0x0000 (0x0AB0 - 0x0AB0)
class AFloor_Stone_C : public AFloor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Floor_Stone.Floor_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Floor_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif