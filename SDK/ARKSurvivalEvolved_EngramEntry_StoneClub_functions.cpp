// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneClub_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneClub.EngramEntry_StoneClub_C.ExecuteUbergraph_EngramEntry_StoneClub
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneClub_C::ExecuteUbergraph_EngramEntry_StoneClub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneClub.EngramEntry_StoneClub_C.ExecuteUbergraph_EngramEntry_StoneClub");

	UEngramEntry_StoneClub_C_ExecuteUbergraph_EngramEntry_StoneClub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
