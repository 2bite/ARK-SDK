// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Forge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Forge.EngramEntry_Forge_C.ExecuteUbergraph_EngramEntry_Forge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Forge_C::ExecuteUbergraph_EngramEntry_Forge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Forge.EngramEntry_Forge_C.ExecuteUbergraph_EngramEntry_Forge");

	UEngramEntry_Forge_C_ExecuteUbergraph_EngramEntry_Forge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
