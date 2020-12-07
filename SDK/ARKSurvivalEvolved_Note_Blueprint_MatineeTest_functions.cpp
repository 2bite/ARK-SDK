// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Note_Blueprint_MatineeTest_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C.UserConstructionScript
// ()

void ANote_Blueprint_MatineeTest_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C.UserConstructionScript");

	ANote_Blueprint_MatineeTest_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C.ExecuteUbergraph_Note_Blueprint_MatineeTest
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ANote_Blueprint_MatineeTest_C::ExecuteUbergraph_Note_Blueprint_MatineeTest(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C.ExecuteUbergraph_Note_Blueprint_MatineeTest");

	ANote_Blueprint_MatineeTest_C_ExecuteUbergraph_Note_Blueprint_MatineeTest_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
