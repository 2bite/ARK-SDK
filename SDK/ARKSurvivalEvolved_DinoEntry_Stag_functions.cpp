// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Stag_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Stag.DinoEntry_Stag_C.ExecuteUbergraph_DinoEntry_Stag
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Stag_C::ExecuteUbergraph_DinoEntry_Stag(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Stag.DinoEntry_Stag_C.ExecuteUbergraph_DinoEntry_Stag");

	UDinoEntry_Stag_C_ExecuteUbergraph_DinoEntry_Stag_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
