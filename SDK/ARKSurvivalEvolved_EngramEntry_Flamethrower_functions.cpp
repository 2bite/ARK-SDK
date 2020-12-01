// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Flamethrower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Flamethrower.EngramEntry_Flamethrower_C.ExecuteUbergraph_EngramEntry_Flamethrower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Flamethrower_C::ExecuteUbergraph_EngramEntry_Flamethrower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Flamethrower.EngramEntry_Flamethrower_C.ExecuteUbergraph_EngramEntry_Flamethrower");

	UEngramEntry_Flamethrower_C_ExecuteUbergraph_EngramEntry_Flamethrower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
