// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Leeds_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Leeds.DinoColorSet_Leeds_C.ExecuteUbergraph_DinoColorSet_Leeds
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Leeds_C::ExecuteUbergraph_DinoColorSet_Leeds(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Leeds.DinoColorSet_Leeds_C.ExecuteUbergraph_DinoColorSet_Leeds");

	UDinoColorSet_Leeds_C_ExecuteUbergraph_DinoColorSet_Leeds_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
