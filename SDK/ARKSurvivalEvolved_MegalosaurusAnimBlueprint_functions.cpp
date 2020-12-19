// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegalosaurusAnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MegalosaurusAnimBlueprint.MegalosaurusAnimBlueprint_C.ExecuteUbergraph_MegalosaurusAnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMegalosaurusAnimBlueprint_C::ExecuteUbergraph_MegalosaurusAnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MegalosaurusAnimBlueprint.MegalosaurusAnimBlueprint_C.ExecuteUbergraph_MegalosaurusAnimBlueprint");

	UMegalosaurusAnimBlueprint_C_ExecuteUbergraph_MegalosaurusAnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
