#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventInputMolerat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PreventInputMolerat.Buff_PreventInputMolerat_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_PreventInputMolerat_C : public ABuff_PreventInput_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PreventInputMolerat.Buff_PreventInputMolerat_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	bool BPPreventFirstPerson();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PreventInputMolerat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
