// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Gigant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Gigant.DinoEntry_Gigant_C.ExecuteUbergraph_DinoEntry_Gigant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Gigant_C::ExecuteUbergraph_DinoEntry_Gigant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Gigant.DinoEntry_Gigant_C.ExecuteUbergraph_DinoEntry_Gigant");

	UDinoEntry_Gigant_C_ExecuteUbergraph_DinoEntry_Gigant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
