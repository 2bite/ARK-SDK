#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gen2_AreaBuff_Eden_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gen2_AreaBuff_Eden.Gen2_AreaBuff_Eden_C
// 0x0000 (0x0D5E - 0x0D5E)
class AGen2_AreaBuff_Eden_C : public AGen2_AreaBuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen2_AreaBuff_Eden.Gen2_AreaBuff_Eden_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gen2_AreaBuff_Eden(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
