// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_TekHoverSail_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_TekHoverSail.DinoEntry_TekHoverSail_C.ExecuteUbergraph_DinoEntry_TekHoverSail
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_TekHoverSail_C::ExecuteUbergraph_DinoEntry_TekHoverSail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_TekHoverSail.DinoEntry_TekHoverSail_C.ExecuteUbergraph_DinoEntry_TekHoverSail");

	UDinoEntry_TekHoverSail_C_ExecuteUbergraph_DinoEntry_TekHoverSail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
