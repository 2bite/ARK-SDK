#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FestiveDinoColors_Summer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FestiveDinoColors_Summer.Buff_FestiveDinoColors_Summer_C
// 0x0000 (0x09AC - 0x09AC)
class ABuff_FestiveDinoColors_Summer_C : public ABuff_FestiveDinoColors_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FestiveDinoColors_Summer.Buff_FestiveDinoColors_Summer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FestiveDinoColors_Summer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
