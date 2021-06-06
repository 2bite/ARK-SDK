// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_CompostBin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_CompostBin.EngramEntry_CompostBin_C.ExecuteUbergraph_EngramEntry_CompostBin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_CompostBin_C::ExecuteUbergraph_EngramEntry_CompostBin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_CompostBin.EngramEntry_CompostBin_C.ExecuteUbergraph_EngramEntry_CompostBin");

	UEngramEntry_CompostBin_C_ExecuteUbergraph_EngramEntry_CompostBin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
