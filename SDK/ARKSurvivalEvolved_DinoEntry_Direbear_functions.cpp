// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Direbear_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Direbear.DinoEntry_Direbear_C.ExecuteUbergraph_DinoEntry_Direbear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Direbear_C::ExecuteUbergraph_DinoEntry_Direbear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Direbear.DinoEntry_Direbear_C.ExecuteUbergraph_DinoEntry_Direbear");

	UDinoEntry_Direbear_C_ExecuteUbergraph_DinoEntry_Direbear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
