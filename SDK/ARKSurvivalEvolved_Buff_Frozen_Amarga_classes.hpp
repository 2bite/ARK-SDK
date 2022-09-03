#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Frozen_Amarga_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Frozen_Amarga.Buff_Frozen_Amarga_C
// 0x0000 (0x0B3B - 0x0B3B)
class ABuff_Frozen_Amarga_C : public ABuff_Frozen_IceKaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Frozen_Amarga.Buff_Frozen_Amarga_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Frozen_Amarga(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
