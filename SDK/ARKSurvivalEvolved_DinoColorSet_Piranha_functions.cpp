// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Piranha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Piranha.DinoColorSet_Piranha_C.ExecuteUbergraph_DinoColorSet_Piranha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Piranha_C::ExecuteUbergraph_DinoColorSet_Piranha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Piranha.DinoColorSet_Piranha_C.ExecuteUbergraph_DinoColorSet_Piranha");

	UDinoColorSet_Piranha_C_ExecuteUbergraph_DinoColorSet_Piranha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
