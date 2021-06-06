// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_BrainSlug_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_BrainSlug.DinoColorSet_BrainSlug_C.ExecuteUbergraph_DinoColorSet_BrainSlug
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_BrainSlug_C::ExecuteUbergraph_DinoColorSet_BrainSlug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_BrainSlug.DinoColorSet_BrainSlug_C.ExecuteUbergraph_DinoColorSet_BrainSlug");

	UDinoColorSet_BrainSlug_C_ExecuteUbergraph_DinoColorSet_BrainSlug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
