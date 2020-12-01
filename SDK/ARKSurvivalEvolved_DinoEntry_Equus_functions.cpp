// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Equus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Equus.DinoEntry_Equus_C.ExecuteUbergraph_DinoEntry_Equus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Equus_C::ExecuteUbergraph_DinoEntry_Equus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Equus.DinoEntry_Equus_C.ExecuteUbergraph_DinoEntry_Equus");

	UDinoEntry_Equus_C_ExecuteUbergraph_DinoEntry_Equus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
