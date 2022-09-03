// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_CaveWolf_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_CaveWolf.DinoColorSet_CaveWolf_C.ExecuteUbergraph_DinoColorSet_CaveWolf
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_CaveWolf_C::ExecuteUbergraph_DinoColorSet_CaveWolf(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_CaveWolf.DinoColorSet_CaveWolf_C.ExecuteUbergraph_DinoColorSet_CaveWolf");

	UDinoColorSet_CaveWolf_C_ExecuteUbergraph_DinoColorSet_CaveWolf_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
