// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_SpaceDolphin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_SpaceDolphin.DinoColorSet_SpaceDolphin_C.ExecuteUbergraph_DinoColorSet_SpaceDolphin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_SpaceDolphin_C::ExecuteUbergraph_DinoColorSet_SpaceDolphin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_SpaceDolphin.DinoColorSet_SpaceDolphin_C.ExecuteUbergraph_DinoColorSet_SpaceDolphin");

	UDinoColorSet_SpaceDolphin_C_ExecuteUbergraph_DinoColorSet_SpaceDolphin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
