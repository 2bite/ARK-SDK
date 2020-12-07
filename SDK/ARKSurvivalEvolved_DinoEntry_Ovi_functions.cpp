// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Ovi_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Ovi.DinoEntry_Ovi_C.ExecuteUbergraph_DinoEntry_Ovi
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Ovi_C::ExecuteUbergraph_DinoEntry_Ovi(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Ovi.DinoEntry_Ovi_C.ExecuteUbergraph_DinoEntry_Ovi");

	UDinoEntry_Ovi_C_ExecuteUbergraph_DinoEntry_Ovi_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
