// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Tusoteuthis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Tusoteuthis.DinoEntry_Tusoteuthis_C.ExecuteUbergraph_DinoEntry_Tusoteuthis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Tusoteuthis_C::ExecuteUbergraph_DinoEntry_Tusoteuthis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Tusoteuthis.DinoEntry_Tusoteuthis_C.ExecuteUbergraph_DinoEntry_Tusoteuthis");

	UDinoEntry_Tusoteuthis_C_ExecuteUbergraph_DinoEntry_Tusoteuthis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
