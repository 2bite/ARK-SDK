// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Argent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Argent.DinoEntry_Argent_C.ExecuteUbergraph_DinoEntry_Argent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Argent_C::ExecuteUbergraph_DinoEntry_Argent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Argent.DinoEntry_Argent_C.ExecuteUbergraph_DinoEntry_Argent");

	UDinoEntry_Argent_C_ExecuteUbergraph_DinoEntry_Argent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
