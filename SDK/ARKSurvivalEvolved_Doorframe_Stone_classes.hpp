#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Doorframe_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Doorframe_Stone.Doorframe_Stone_C
// 0x0000 (0x0AF8 - 0x0AF8)
class ADoorframe_Stone_C : public ADoorframe_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Doorframe_Stone.Doorframe_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Doorframe_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
