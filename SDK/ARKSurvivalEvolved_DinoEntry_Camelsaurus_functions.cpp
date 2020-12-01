// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Camelsaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Camelsaurus.DinoEntry_Camelsaurus_C.ExecuteUbergraph_DinoEntry_Camelsaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Camelsaurus_C::ExecuteUbergraph_DinoEntry_Camelsaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Camelsaurus.DinoEntry_Camelsaurus_C.ExecuteUbergraph_DinoEntry_Camelsaurus");

	UDinoEntry_Camelsaurus_C_ExecuteUbergraph_DinoEntry_Camelsaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
