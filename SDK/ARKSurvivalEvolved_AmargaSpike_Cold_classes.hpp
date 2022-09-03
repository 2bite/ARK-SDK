#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Cold_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmargaSpike_Cold.AmargaSpike_Cold_C
// 0x0000 (0x1088 - 0x1088)
class AAmargaSpike_Cold_C : public AAmargaSpike_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Cold.AmargaSpike_Cold_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AmargaSpike_Cold(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
