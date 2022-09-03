// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_TekWyvern_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_TekWyvern.DinoColorSet_TekWyvern_C.ExecuteUbergraph_DinoColorSet_TekWyvern
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_TekWyvern_C::ExecuteUbergraph_DinoColorSet_TekWyvern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_TekWyvern.DinoColorSet_TekWyvern_C.ExecuteUbergraph_DinoColorSet_TekWyvern");

	UDinoColorSet_TekWyvern_C_ExecuteUbergraph_DinoColorSet_TekWyvern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
