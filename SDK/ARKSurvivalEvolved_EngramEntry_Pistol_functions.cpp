// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Pistol_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Pistol.EngramEntry_Pistol_C.ExecuteUbergraph_EngramEntry_Pistol
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Pistol_C::ExecuteUbergraph_EngramEntry_Pistol(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Pistol.EngramEntry_Pistol_C.ExecuteUbergraph_EngramEntry_Pistol");

	UEngramEntry_Pistol_C_ExecuteUbergraph_EngramEntry_Pistol_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
