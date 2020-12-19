// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Cherufe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Cherufe.DinoEntry_Cherufe_C.ExecuteUbergraph_DinoEntry_Cherufe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Cherufe_C::ExecuteUbergraph_DinoEntry_Cherufe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Cherufe.DinoEntry_Cherufe_C.ExecuteUbergraph_DinoEntry_Cherufe");

	UDinoEntry_Cherufe_C_ExecuteUbergraph_DinoEntry_Cherufe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
