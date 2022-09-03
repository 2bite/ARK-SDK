#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Zipline_Dino_Dinopithecus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C
// 0x0000 (0x0F70 - 0x0F70)
class ABuff_Zipline_Dino_Dinopithecus_C : public ABuff_Zipline_DinoBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Zipline_Dino_Dinopithecus.Buff_Zipline_Dino_Dinopithecus_C");
		return ptr;
	}


	void STATIC_BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Zipline_Dino_Dinopithecus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
